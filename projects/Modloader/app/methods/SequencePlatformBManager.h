#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/SequencePlatformBManager.h>

namespace app::classes::SequencePlatformBManager {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, app::SequencePlatformBManager* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SequencePlatformBManager* this_ptr)
} // namespace app::classes::SequencePlatformBManager
