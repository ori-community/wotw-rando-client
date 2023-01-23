#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DepotId_t__Boxed.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/DepotId_t.h>

namespace app::classes::Steamworks::DepotId_t {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::DepotId_t__Boxed * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x0012ECC0, app::String*, ToString, (app::DepotId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012F870, bool, Equals_1, (app::DepotId_t__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::DepotId_t__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::DepotId_t x, app::DepotId_t y))
    IL2CPP_REGISTER_METHOD(0x015FAC80, bool, op_Inequality, (app::DepotId_t x, app::DepotId_t y))
    IL2CPP_REGISTER_METHOD(0x006CE970, app::DepotId_t, op_Explicit_1, (uint32_t value))
    IL2CPP_REGISTER_METHOD(0x006CE970, uint32_t, op_Explicit_2, (app::DepotId_t that))
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_2, (app::DepotId_t__Boxed * this_ptr, app::DepotId_t other))
    IL2CPP_REGISTER_METHOD(0x0012EDD0, int32_t, CompareTo, (app::DepotId_t__Boxed * this_ptr, app::DepotId_t other))
    IL2CPP_REGISTER_METHOD(0x015FAD20, void, cctor, ())
    inline bool operator==(app::DepotId_t x, app::DepotId_t y) {
        return op_Equality(x, y);
    }
    inline bool operator!=(app::DepotId_t x, app::DepotId_t y) {
        return op_Inequality(x, y);
    }
} // namespace app::classes::Steamworks::DepotId_t
