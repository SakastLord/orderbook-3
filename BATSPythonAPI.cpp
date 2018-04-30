//
// Created by Uncle Chu on 28/4/18.
//

#include "Python.h"
#include "BATSTradingStatusMsg.hpp"
#include "BATSTradeMsg.hpp"
#include "BATSRetailPriceImproveMsg.hpp"

BOOST_PYTHON_MODULE(bats_api)
{
    PyEval_InitThreads(); // need this to mess around with GIL

    BATSTradingStatusMsg::export_to_python();
	BATSTradeMsg::export_to_python();
	BATSRetailPriceImproveMsg::export_to_python();
}