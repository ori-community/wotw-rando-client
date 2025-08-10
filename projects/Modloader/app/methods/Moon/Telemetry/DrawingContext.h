#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DrawingContext.h>
#include <Modloader/app/structs/DrawingContext__Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::Telemetry::DrawingContext {
    IL2CPP_REGISTER_METHOD(0x00E32FE0, bool, op_Equality, app::DrawingContext c1, app::DrawingContext c2)
    IL2CPP_REGISTER_METHOD(0x00E33090, bool, op_Inequality, app::DrawingContext c1, app::DrawingContext c2)
    IL2CPP_REGISTER_METHOD(0x0011F960, bool, Equals, app::DrawingContext__Boxed* this_ptr, app::Object* obj)
    IL2CPP_REGISTER_METHOD(0x0011F970, int32_t, GetHashCode, app::DrawingContext__Boxed* this_ptr)
    inline bool operator==(app::DrawingContext c1, app::DrawingContext c2) { return op_Equality(c1, c2); }
    inline bool operator!=(app::DrawingContext c1, app::DrawingContext c2) { return op_Inequality(c1, c2); }
} // namespace app::classes::Moon::Telemetry::DrawingContext
