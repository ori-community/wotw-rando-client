#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MirrorData.h>
#include <Modloader/app/structs/MirroringData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MirrorData {
    IL2CPP_REGISTER_METHOD(0x01452B20, app::MirroringData*, GetDataByJointName, app::MirrorData* this_ptr, app::String* joint_name)
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, app::MirrorData* this_ptr)
} // namespace app::classes::MirrorData
