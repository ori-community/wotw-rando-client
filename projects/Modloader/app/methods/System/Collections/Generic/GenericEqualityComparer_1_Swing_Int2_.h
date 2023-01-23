#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_Swing_Int2_.h>
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/Int2__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_Swing_Int2_ {
    IL2CPP_REGISTER_METHOD(0x02B60970, bool, Equals_1, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr, app::Int2 x, app::Int2 y))
    IL2CPP_REGISTER_METHOD(0x0265A530, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr, app::Int2 obj))
    IL2CPP_REGISTER_METHOD(0x02B60990, int32_t, IndexOf, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr, app::Int2__Array* array, app::Int2 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B60A00, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr, app::Int2__Array* array, app::Int2 value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_Swing_Int2_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_Swing_Int2_
