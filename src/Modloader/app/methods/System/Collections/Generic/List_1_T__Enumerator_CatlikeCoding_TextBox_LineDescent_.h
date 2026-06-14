#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LineDescent.h>
#include <Modloader/app/structs/List_1_CatlikeCoding_TextBox_LineDescent_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_CatlikeCoding_TextBox_LineDescent_ {
    IL2CPP_REGISTER_METHOD(
        0x0014CC40,
        void,
        ctor,
        app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr,
        app::List_1_CatlikeCoding_TextBox_LineDescent_* list
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CC70, bool, MoveNext, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CD40, bool, MoveNextRare, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CD90, app::LineDescent, get_Current, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CDB0, app::Object*, IEnumerator_get_Current, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0014CE70, void, IEnumerator_Reset, app::List_1_T_Enumerator_CatlikeCoding_TextBox_LineDescent___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_CatlikeCoding_TextBox_LineDescent_
