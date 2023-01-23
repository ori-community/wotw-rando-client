#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SoccerDemo.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::RootMotion::Demos::SoccerDemo {
    IL2CPP_REGISTER_METHOD(0x02046410, void, Start, (app::SoccerDemo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02046760, app::IEnumerator*, ResetDelayed, (app::SoccerDemo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoccerDemo * this_ptr))
} // namespace app::classes::RootMotion::Demos::SoccerDemo
