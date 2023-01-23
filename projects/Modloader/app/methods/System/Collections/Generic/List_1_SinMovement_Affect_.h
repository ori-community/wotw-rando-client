#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_T_Enumerator_SinMovement_Affect_.h>
#include <Modloader/app/structs/List_1_SinMovement_Affect_.h>
#include <Modloader/app/structs/SinMovement_Affect.h>

namespace app::classes::System::Collections::Generic::List_1_SinMovement_Affect_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_SinMovement_Affect_, GetEnumerator, (app::List_1_SinMovement_Affect_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A018, List_1_SinMovement_Affect__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_SinMovement_Affect_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F238, List_1_SinMovement_Affect__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::SinMovement_Affect*, get_Item, (app::List_1_SinMovement_Affect_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04723690, List_1_SinMovement_Affect__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_SinMovement_Affect_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750E70, List_1_SinMovement_Affect__get_Count__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_SinMovement_Affect_
