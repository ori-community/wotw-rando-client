#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparison_1_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/IEnumerable_1_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/List_1_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_LeakedSceneObjectDetector_ObjectData_.h>
#include <Modloader/app/structs/Predicate_1_LeakedSceneObjectDetector_ObjectData_.h>

namespace app::classes::System::Collections::Generic::List_1_LeakedSceneObjectDetector_ObjectData_ {
    IL2CPP_REGISTER_METHOD(
        0x02FE8360,
        void,
        ctor,
        app::List_1_LeakedSceneObjectDetector_ObjectData_* this_ptr,
        app::IEnumerable_1_LeakedSceneObjectDetector_ObjectData_* collection
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1EFE0,
        int32_t,
        RemoveAll,
        app::List_1_LeakedSceneObjectDetector_ObjectData_* this_ptr,
        app::Predicate_1_LeakedSceneObjectDetector_ObjectData_* match
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEA0,
        void,
        Sort,
        app::List_1_LeakedSceneObjectDetector_ObjectData_* this_ptr,
        app::Comparison_1_LeakedSceneObjectDetector_ObjectData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_LeakedSceneObjectDetector_ObjectData_,
        GetEnumerator,
        app::List_1_LeakedSceneObjectDetector_ObjectData_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_LeakedSceneObjectDetector_ObjectData_
