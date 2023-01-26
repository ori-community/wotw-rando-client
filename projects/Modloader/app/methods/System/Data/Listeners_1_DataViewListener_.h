#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Listeners_1_DataViewListener_.h>
#include <Modloader/app/structs/DataRow.h>
#include <Modloader/app/structs/DataViewListener.h>
#include <Modloader/app/structs/ListChangedEventArgs.h>
#include <Modloader/app/structs/ListChangedType__Enum.h>
#include <Modloader/app/structs/Listeners_1_TE_Act_4_DataViewListe_DataViewListe_Sys_ComponentMo_ListChangedT_Data_Sy_Boo_.h>
#include <Modloader/app/structs/Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_.h>
#include <Modloader/app/structs/Listeners_1_T_Ac_4_DataViewList_DataViewList_Sy_ComponentM_ListChangedEvent_Sy_Boo_Sy_Boo_.h>

namespace app::classes::System::Data::Listeners_1_DataViewListener_ {
    IL2CPP_REGISTER_METHOD(0x02FAEC80, void, ctor, (app::Listeners_1_DataViewListener_ * this_ptr, int32_t object_i_d, app::Listeners_1_TElem_Func_2_DataViewListener_DataViewListener_System_Boolean_* notify_filter))
    IL2CPP_REGISTER_METHOD(0x01A72D00, void, Add, (app::Listeners_1_DataViewListener_ * this_ptr, app::DataViewListener* listener))
    IL2CPP_REGISTER_METHOD(0x02FAEE30, void, Remove, (app::Listeners_1_DataViewListener_ * this_ptr, app::DataViewListener* listener))
    IL2CPP_REGISTER_METHOD(0x02FAEDD0, bool, get_HasListeners, (app::Listeners_1_DataViewListener_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01AEEC40, void, Notify_1, (app::Listeners_1_DataViewListener_ * this_ptr, app::ListChangedEventArgs* arg1, bool arg2, bool arg3, app::Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedEventArgs_System_Boolean_System_Boolean_* action))
    IL2CPP_REGISTER_METHOD(0x01AEEA30, void, Notify_2, (app::Listeners_1_DataViewListener_ * this_ptr, app::ListChangedType__Enum arg1, app::DataRow* arg2, bool arg3, app::Listeners_1_TElem_Action_4_DataViewListener_DataViewListener_System_ComponentModel_ListChangedType_DataRow_System_Boolean_* action))
} // namespace app::classes::System::Data::Listeners_1_DataViewListener_
