#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_EntityId___Boxed.h>
#include <Modloader/app/structs/EntityId.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Nullable_1_Moon_Timeline_EntityId_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_Moon_Timeline_EntityId_ {
    IL2CPP_REGISTER_METHOD(0x001F6090, bool, get_HasValue, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754C40, Nullable_1_Moon_Timeline_EntityId__get_HasValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F60A0, app::EntityId, get_Value, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C4C0, Nullable_1_Moon_Timeline_EntityId__get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr, app::EntityId value))
    IL2CPP_REGISTER_METHODINFO(0x0476BAF8, Nullable_1_Moon_Timeline_EntityId___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F6180, bool, Equals_1, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F61D0, bool, Equals_2, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr, app::Nullable_1_Moon_Timeline_EntityId_ other))
    IL2CPP_REGISTER_METHOD(0x001F6290, int32_t, GetHashCode, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::EntityId, GetValueOrDefault_1, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F62B0, app::EntityId, GetValueOrDefault_2, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr, app::EntityId default_value))
    IL2CPP_REGISTER_METHOD(0x001F62D0, app::String*, ToString, (app::Nullable_1_Moon_Timeline_EntityId___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0254FA50, app::Object*, Box, (app::Nullable_1_Moon_Timeline_EntityId_ o))
    IL2CPP_REGISTER_METHOD(0x0254FAC0, app::Nullable_1_Moon_Timeline_EntityId_, Unbox, (app::Object * o))
} // namespace app::classes::System::Nullable_1_Moon_Timeline_EntityId_
