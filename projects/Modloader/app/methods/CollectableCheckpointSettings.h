#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CollectableCheckpointSettings.h>

namespace app::classes::CollectableCheckpointSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CollectableCheckpointSettings* this_ptr)
}
