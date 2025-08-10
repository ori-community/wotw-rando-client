#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationMetaData_AnimationData.h>
#include <Modloader/app/structs/IEnumerable_1_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/List_1_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_AnimationMetaData_AnimationData_.h>
#include <Modloader/app/structs/Predicate_1_AnimationMetaData_AnimationData_.h>

namespace app::classes::System::Collections::Generic::List_1_AnimationMetaData_AnimationData_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_AnimationMetaData_AnimationData_,
        GetEnumerator,
        app::List_1_AnimationMetaData_AnimationData_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025F05A0,
        app::AnimationMetaData_AnimationData*,
        Find,
        app::List_1_AnimationMetaData_AnimationData_* this_ptr,
        app::Predicate_1_AnimationMetaData_AnimationData_* match
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, app::List_1_AnimationMetaData_AnimationData_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor_2,
        app::List_1_AnimationMetaData_AnimationData_* this_ptr,
        app::IEnumerable_1_AnimationMetaData_AnimationData_* collection
    )
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AnimationMetaData_AnimationData*, get_Item, app::List_1_AnimationMetaData_AnimationData_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_AnimationMetaData_AnimationData_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_AnimationMetaData_AnimationData_
