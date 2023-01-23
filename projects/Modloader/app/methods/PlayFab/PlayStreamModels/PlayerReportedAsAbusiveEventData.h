#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerReportedAsAbusiveEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerReportedAsAbusiveEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerReportedAsAbusiveEventData * this_ptr))
}
