#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntegratedSubsystem.h>

namespace app::classes::UnityEngine::Experimental::IntegratedSubsystem {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::IntegratedSubsystem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x031754A0, void, SetHandle, app::IntegratedSubsystem* this_ptr, app::IntegratedSubsystem* inst)
} // namespace app::classes::UnityEngine::Experimental::IntegratedSubsystem
