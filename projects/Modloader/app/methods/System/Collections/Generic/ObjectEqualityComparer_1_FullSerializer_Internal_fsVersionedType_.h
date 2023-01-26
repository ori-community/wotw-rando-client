#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/fsVersionedType.h>
#include <Modloader/app/structs/fsVersionedType__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x01CD3540, bool, Equals_1, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType x, app::fsVersionedType y))
    IL2CPP_REGISTER_METHOD(0x01CD35B0, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType obj))
    IL2CPP_REGISTER_METHOD(0x01CD35E0, int32_t, IndexOf, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType__Array* array, app::fsVersionedType value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD36F0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::fsVersionedType__Array* array, app::fsVersionedType value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_FullSerializer_Internal_fsVersionedType_
