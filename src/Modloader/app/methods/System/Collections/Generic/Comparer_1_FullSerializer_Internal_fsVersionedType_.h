#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/Comparison_1_FullSerializer_Internal_fsVersionedType_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_FullSerializer_Internal_fsVersionedType_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_FullSerializer_Internal_fsVersionedType_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x02C9BF10,
        app::Comparer_1_FullSerializer_Internal_fsVersionedType_*,
        Create,
        app::Comparison_1_FullSerializer_Internal_fsVersionedType_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x02C9C110, app::Comparer_1_FullSerializer_Internal_fsVersionedType_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02808F10,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_FullSerializer_Internal_fsVersionedType_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_FullSerializer_Internal_fsVersionedType_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_FullSerializer_Internal_fsVersionedType_
