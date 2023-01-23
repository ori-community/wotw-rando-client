#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_CharacterState_.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/IEnumerator_1_KeyValuePair_2_System_Int32_CharacterState_.h>
#include <Modloader/app/structs/IList_1_CharacterState_.h>

namespace app::classes::System::Collections::Generic::SortedList_2_System_Int32_CharacterState_ {
    IL2CPP_REGISTER_METHOD(0x02CAE6C0, void, Add, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, int32_t key, app::CharacterState* value))
    IL2CPP_REGISTER_METHODINFO(0x04783470, SortedList_2_System_Int32_CharacterState__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CB0620, int32_t, IndexOfValue, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, app::CharacterState* value))
    IL2CPP_REGISTER_METHODINFO(0x04734F90, SortedList_2_System_Int32_CharacterState__IndexOfValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CB0800, void, RemoveAt, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470D2C8, SortedList_2_System_Int32_CharacterState__RemoveAt__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAFD90, app::IEnumerator_1_KeyValuePair_2_System_Int32_CharacterState_*, GetEnumerator, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470F0C8, SortedList_2_System_Int32_CharacterState__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAE5F0, void, ctor, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717670, SortedList_2_System_Int32_CharacterState___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAF430, bool, ContainsValue, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, app::CharacterState* value))
    IL2CPP_REGISTER_METHODINFO(0x04754E88, SortedList_2_System_Int32_CharacterState__ContainsValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAF400, bool, ContainsKey, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHODINFO(0x0470DB10, SortedList_2_System_Int32_CharacterState__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CB00F0, void, set_Item, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr, int32_t key, app::CharacterState* value))
    IL2CPP_REGISTER_METHODINFO(0x04773028, SortedList_2_System_Int32_CharacterState__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CAEF10, app::IList_1_CharacterState_*, get_Values, (app::SortedList_2_System_Int32_CharacterState_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04741648, SortedList_2_System_Int32_CharacterState__get_Values__MethodInfo)
} // namespace app::classes::System::Collections::Generic::SortedList_2_System_Int32_CharacterState_
