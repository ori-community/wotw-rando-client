#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_ITimelineEntity_.h>

namespace app::classes::Moon::MoonReference_1_Moon_Timeline_ITimelineEntity_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(
        0x02720AC0,
        app::ITimelineEntity*,
        Resolve,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr, app::ITimelineEntity* reference)
    IL2CPP_REGISTER_METHOD(0x02720E10, app::ITimelineEntity*, SaveResolverStatic, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02720EB0,
        app::ITimelineEntity*,
        SafeResolve,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr,
        app::IMoonResolverContext* context
    )
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr, app::ITimelineEntity* new_value)
    IL2CPP_REGISTER_METHOD(
        0x02721E50,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_*,
        Copy,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, SetVolatileValue, app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr, app::ITimelineEntity* new_value)
    IL2CPP_REGISTER_METHOD(
        0x027214E0,
        bool,
        TryResolve,
        app::MoonReference_1_Moon_Timeline_ITimelineEntity_* this_ptr,
        app::ITimelineEntity** value,
        app::IMoonResolverContext* context
    )
} // namespace app::classes::Moon::MoonReference_1_Moon_Timeline_ITimelineEntity_
