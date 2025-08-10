#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/MoonTimelineNotifier_Action__Enum.h>
#include <Modloader/app/structs/MoonTimelineNotifier_c.h>

namespace app::classes::Moon::Timeline::MoonTimelineNotifier___c {
    IL2CPP_REGISTER_METHOD(0x01E77F50, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTimelineNotifier_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x002FA000,
        void,
        __cctor_b__6_0,
        app::MoonTimelineNotifier_c* this_ptr,
        app::ITimelineEntity* _p0_,
        app::IContext* _p1_,
        app::MoonTimelineNotifier_Action__Enum _p2_
    )
} // namespace app::classes::Moon::Timeline::MoonTimelineNotifier___c
