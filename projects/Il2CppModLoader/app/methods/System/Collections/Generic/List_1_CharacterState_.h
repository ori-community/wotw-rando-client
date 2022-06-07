#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_CharacterState_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_CharacterState_ * this_ptr, app::CharacterState * item))
    IL2CPP_REGISTER_METHODINFO(0x0478A280, List_1_CharacterState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_CharacterState_ * this_ptr, app::CharacterState * item))
    IL2CPP_REGISTER_METHODINFO(0x0471C968, List_1_CharacterState__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_CharacterState_, GetEnumerator, (app::List_1_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047030A0, List_1_CharacterState__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_CharacterState_ * this_ptr, app::CharacterState * item))
    IL2CPP_REGISTER_METHODINFO(0x0476D0C8, List_1_CharacterState__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C6F0, List_1_CharacterState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CharacterState *, get_Item, (app::List_1_CharacterState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472FC08, List_1_CharacterState__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759448, List_1_CharacterState__get_Count__MethodInfo)
}
