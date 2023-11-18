#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RagdollUtilityDemo.h>

namespace app::classes::RootMotion::Demos::RagdollUtilityDemo {
    IL2CPP_REGISTER_METHOD(0x0222E700, void, OnGUI, (app::RagdollUtilityDemo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0222E790, void, Update, (app::RagdollUtilityDemo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RagdollUtilityDemo * this_ptr))
} // namespace app::classes::RootMotion::Demos::RagdollUtilityDemo
