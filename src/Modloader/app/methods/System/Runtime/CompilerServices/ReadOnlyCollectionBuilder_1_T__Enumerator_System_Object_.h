#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ReadOnlyCollectionBuilder_1_System_Object_.h>
#include <Modloader/app/structs/ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_.h>

namespace app::classes::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_T__Enumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_Current, app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02771980, app::Object*, IEnumerator_get_Current, app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02771940,
        void,
        ctor,
        app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr,
        app::ReadOnlyCollectionBuilder_1_System_Object_* builder
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02771A30, bool, MoveNext, app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02771B50, void, IEnumerator_Reset, app::ReadOnlyCollectionBuilder_1_T_Enumerator_System_Object_* this_ptr)
} // namespace app::classes::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_T__Enumerator_System_Object_
