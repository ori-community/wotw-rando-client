#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Object_System_Single_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WeightedGroup_1_System_Object_.h>

namespace app::classes::WeightedGroup_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x0243AC00, int32_t, get_Count, app::WeightedGroup_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, app::WeightedGroup_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02ACF490,
        void,
        ctor_2,
        app::WeightedGroup_1_System_Object_* this_ptr,
        app::List_1_System_Object_* elements,
        app::List_1_System_Single_* weights
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACF4C0,
        void,
        Initialize,
        app::WeightedGroup_1_System_Object_* this_ptr,
        app::List_1_System_Object_* elements,
        app::List_1_System_Single_* weights
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACF7F0,
        void,
        SetElements,
        app::WeightedGroup_1_System_Object_* this_ptr,
        app::List_1_System_Object_* elements,
        app::List_1_System_Single_* weights
    )
    IL2CPP_REGISTER_METHOD(
        0x02ACF910,
        void,
        SetWeights,
        app::WeightedGroup_1_System_Object_* this_ptr,
        app::Dictionary_2_System_Object_System_Single_* new_weights
    )
    IL2CPP_REGISTER_METHOD(0x02ACFA70, void, RemoveElement, app::WeightedGroup_1_System_Object_* this_ptr, app::Object* element)
    IL2CPP_REGISTER_METHOD(0x02ACFC60, void, SetAllWeights, app::WeightedGroup_1_System_Object_* this_ptr, float weight)
    IL2CPP_REGISTER_METHOD(0x02ACFDA0, void, SetWeight, app::WeightedGroup_1_System_Object_* this_ptr, app::Object* element, float weight)
    IL2CPP_REGISTER_METHOD(0x02ACFF10, float, GetWeight, app::WeightedGroup_1_System_Object_* this_ptr, app::Object* element)
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, GetTotalWeight, app::WeightedGroup_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD0070, void, RecalculateWeighting, app::WeightedGroup_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AD0150, app::Object*, GetRandomElement, app::WeightedGroup_1_System_Object_* this_ptr)
} // namespace app::classes::WeightedGroup_1_System_Object_
