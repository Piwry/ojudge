/*********************************************************************
* Copyright (C) 2020 Miguel Revilla Rodríguez
*                    and the OJudge Platform project contributors
*
* This file is part of the OJudge Platform
*
* Read the LICENSE file for information on license terms
*********************************************************************/

#include <mutex>
#include "SubmissionStore.h"

//std::mutex setSetting_mutex;

using namespace Wt;

SubmissionStore::SubmissionStore(DBModel *dbmodel) : dbmodel_(dbmodel) {

}
