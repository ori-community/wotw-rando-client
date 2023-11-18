#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberStatesExcludedFromRecording.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UberStatesExcludedFromRecording {
    IL2CPP_REGISTER_METHOD(0x0128BC70, bool, IsExcluded, (app::UberStatesExcludedFromRecording * this_ptr, app::String* asset_guid))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, BuildAssetGuids, (app::UberStatesExcludedFromRecording * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberStatesExcludedFromRecording * this_ptr))
} // namespace app::classes::UberStatesExcludedFromRecording
