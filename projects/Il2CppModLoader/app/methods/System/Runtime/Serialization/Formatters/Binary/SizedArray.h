#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SizedArray {
    IL2CPP_REGISTER_METHOD(0x01DA1860, void, ctor_1, (app::SizedArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA1900, void, ctor_2, (app::SizedArray * this_ptr, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01DA19B0, void, ctor_3, (app::SizedArray * this_ptr, app::SizedArray* sized_array))
    IL2CPP_REGISTER_METHOD(0x01DA1AC0, app::Object*, Clone, (app::SizedArray * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA1CE0, app::Object*, get_Item, (app::SizedArray * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01DA1D80, void, set_Item, (app::SizedArray * this_ptr, int32_t index, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01DA1EF0, void, IncreaseCapacity, (app::SizedArray * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476DC68, SizedArray_IncreaseCapacity__MethodInfo)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::SizedArray
