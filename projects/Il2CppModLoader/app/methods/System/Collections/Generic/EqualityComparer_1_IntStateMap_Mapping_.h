#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::EqualityComparer_1_IntStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_IntStateMap_Mapping_ *, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02CD3A80, app::EqualityComparer_1_IntStateMap_Mapping_ *, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B53BB0, int32_t, IndexOf, (app::EqualityComparer_1_IntStateMap_Mapping_ * this_ptr, app::IntStateMap_Mapping__Array * array, app::IntStateMap_Mapping value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B53C90, int32_t, LastIndexOf, (app::EqualityComparer_1_IntStateMap_Mapping_ * this_ptr, app::IntStateMap_Mapping__Array * array, app::IntStateMap_Mapping value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B53D80, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_IntStateMap_Mapping_ * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x02B53E80, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_IntStateMap_Mapping_ * this_ptr, app::Object * x, app::Object * y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_IntStateMap_Mapping_ * this_ptr))
}
