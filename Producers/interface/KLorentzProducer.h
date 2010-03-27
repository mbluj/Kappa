#ifndef KAPPA_LORENTZPRODUCER_H
#define KAPPA_LORENTZPRODUCER_H

#include "KBaseMultiLVProducer.h"
#include <DataFormats/JetReco/interface/CaloJet.h>
#include <DataFormats/METReco/interface/HcalNoiseRBX.h>
#include <DataFormats/TrackReco/interface/Track.h>

struct KLorentzProducer_Product
{
	typedef std::vector<KDataLV> type;
	static const std::string id() { return "std::vector<KDataLV>"; };
	static const std::string producer() { return "KLorentzProducer"; };
};

class KLorentzProducer : public KRegexMultiLVProducer<edm::View<reco::Candidate>, KLorentzProducer_Product>
{
public:
	KLorentzProducer(const edm::ParameterSet &cfg, TTree *_event_tree, TTree *_run_tree) :
		KRegexMultiLVProducer<edm::View<reco::Candidate>, KLorentzProducer_Product>(cfg, _event_tree, _run_tree) {}

	virtual void fillSingle(const SingleInputType &in, SingleOutputType &out)
	{
		copyP4(in, out.p4);
	}
};

#endif
