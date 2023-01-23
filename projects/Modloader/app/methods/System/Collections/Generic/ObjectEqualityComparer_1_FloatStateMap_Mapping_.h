#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectEqualityComparer_1_FloatStateMap_Mapping_.h>
#include <Modloader/app/structs/FloatStateMap_Mapping.h>
#include <Modloader/app/structs/FloatStateMap_Mapping__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_FloatStateMap_Mapping_ {
    IL2CPP_REGISTER_METHOD(0x01CD3170, bool, Equals_1, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping x, app::FloatStateMap_Mapping y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping obj))
    IL2CPP_REGISTER_METHOD(0x01CD3230, int32_t, IndexOf, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping__Array* array, app::FloatStateMap_Mapping value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD33B0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr, app::FloatStateMap_Mapping__Array* array, app::FloatStateMap_Mapping value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_FloatStateMap_Mapping_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_FloatStateMap_Mapping_
