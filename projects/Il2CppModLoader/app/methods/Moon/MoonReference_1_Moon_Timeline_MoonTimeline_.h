#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0475E5D8, MoonReference_1_Moon_Timeline_MoonTimeline__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonTimeline*, Resolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04737700, MoonReference_1_Moon_Timeline_MoonTimeline__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047529E0, MoonReference_1_Moon_Timeline_MoonTimeline__get_HasAReference__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonTimeline*, SafeResolve, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04786BC0, MoonReference_1_Moon_Timeline_MoonTimeline__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_Moon_Timeline_MoonTimeline_ * this_ptr, app::MoonTimeline* reference))
    IL2CPP_REGISTER_METHODINFO(0x0474D530, MoonReference_1_Moon_Timeline_MoonTimeline___ctor__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_Moon_Timeline_MoonTimeline_
