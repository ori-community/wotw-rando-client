#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HServerQuery__Boxed.h>
#include <Modloader/app/structs/HServerQuery.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Steamworks::HServerQuery {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::HServerQuery__Boxed * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String*, ToString, (app::HServerQuery__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001311F0, bool, Equals_1, (app::HServerQuery__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::HServerQuery__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::HServerQuery x, app::HServerQuery y))
    IL2CPP_REGISTER_METHOD(0x015FBAE0, bool, op_Inequality, (app::HServerQuery x, app::HServerQuery y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::HServerQuery, op_Explicit_1, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit_2, (app::HServerQuery that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::HServerQuery__Boxed * this_ptr, app::HServerQuery other))
    IL2CPP_REGISTER_METHOD(0x001312E0, int32_t, CompareTo, (app::HServerQuery__Boxed * this_ptr, app::HServerQuery other))
    IL2CPP_REGISTER_METHOD(0x015FBB80, void, cctor, ())
    inline bool operator==(app::HServerQuery x, app::HServerQuery y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::HServerQuery x, app::HServerQuery y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::HServerQuery
