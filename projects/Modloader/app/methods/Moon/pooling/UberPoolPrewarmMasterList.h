#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList_PrewarmConfig.h>
#include <Modloader/app/structs/UberPoolPrewarmMasterList.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::pooling::UberPoolPrewarmMasterList {
    IL2CPP_REGISTER_METHOD(0x00F30ED0, app::UberPoolPrewarmMasterList_PrewarmConfig*, GetConfig, (app::UberPoolPrewarmMasterList * this_ptr, app::String* id))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::UberPoolPrewarmMasterList * this_ptr))
} // namespace app::classes::Moon::pooling::UberPoolPrewarmMasterList
