#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MetaData.h>

namespace app::classes::UnityEngine::Profiling::Memory::Experimental::MetaData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MetaData* this_ptr)
}
