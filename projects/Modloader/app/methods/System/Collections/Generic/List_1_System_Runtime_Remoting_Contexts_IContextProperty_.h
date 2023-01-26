#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContextProperty__Array.h>
#include <Modloader/app/structs/IContextProperty.h>
#include <Modloader/app/structs/List_1_System_Runtime_Remoting_Contexts_IContextProperty_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Runtime_Remoting_Contexts_IContextProperty_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ {
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IContextProperty__Array*, ToArray, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Runtime_Remoting_Contexts_IContextProperty_, GetEnumerator, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr, app::IContextProperty* item))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::IContextProperty*, get_Item, (app::List_1_System_Runtime_Remoting_Contexts_IContextProperty_ * this_ptr, int32_t index))
} // namespace app::classes::System::Collections::Generic::List_1_System_Runtime_Remoting_Contexts_IContextProperty_
