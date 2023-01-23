#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Quest___Boxed.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Quest_ {
    IL2CPP_REGISTER_METHOD(0x00107C20, app::Quest*, get_Current, (app::List_1_T_Enumerator_Quest___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474A968, List_1_T_Enumerator_Quest__get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, (app::List_1_T_Enumerator_Quest___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477BC78, List_1_T_Enumerator_Quest__MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, (app::List_1_T_Enumerator_Quest___Boxed * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C8A0, List_1_T_Enumerator_Quest__Dispose__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_Quest_
