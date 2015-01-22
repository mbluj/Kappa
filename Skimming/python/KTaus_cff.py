#-# Copyright (c) 2014 - All Rights Reserved
#-#   Bastian Kargoll <bastian.kargoll@cern.ch>
#-#   Joram Berger <joram.berger@cern.ch>
#-#   Roger Wolf <roger.wolf@cern.ch>

import FWCore.ParameterSet.Config as cms

## ------------------------------------------------------------------------
##  rerun tau reconstruction sequence following POG recommendation:
##  https://twiki.cern.ch/twiki/bin/view/CMSPublic/SWGuidePFTauID#5_3_12_and_higher
##  rerun recoTauClassicHPSSequence to get newest taus
from RecoTauTag.Configuration.RecoPFTauTag_cff import *

## ------------------------------------------------------------------------
## Definition of sequences

## run this to get latest greatest HPS taus
makeKappaTaus = cms.Sequence(
    recoTauClassicHPSSequence
    )
