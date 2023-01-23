#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Listeners_1_System_Object_.h>
#include <Modloader/app/structs/Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object_.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_.h>
#include <Modloader/app/structs/Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Boolean_System_Boolean_.h>

namespace app::classes::System::Data::Listeners_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02FAEDD0, bool, get_HasListeners, (app::Listeners_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FAEC80, void, ctor, (app::Listeners_1_System_Object_ * this_ptr, int32_t object_i_d, app::Listeners_1_TElem_Func_2_System_Object_System_Object_System_Boolean_* notify_filter))
    IL2CPP_REGISTER_METHOD(0x01A72D00, void, Add, (app::Listeners_1_System_Object_ * this_ptr, app::Object* listener))
    IL2CPP_REGISTER_METHOD(0x02FAEE10, int32_t, IndexOfReference, (app::Listeners_1_System_Object_ * this_ptr, app::Object* listener))
    IL2CPP_REGISTER_METHOD(0x02FAEE30, void, Remove, (app::Listeners_1_System_Object_ * this_ptr, app::Object* listener))
    IL2CPP_REGISTER_METHOD(0x01AEEE50, void, Notify_1, (app::Listeners_1_System_Object_ * this_ptr, app::Object* arg1, app::Object* arg2, app::Object* arg3, app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Object_System_Object_* action))
    IL2CPP_REGISTER_METHOD(0x02FAEF00, void, RemoveNullListeners, (app::Listeners_1_System_Object_ * this_ptr, int32_t null_index))
    IL2CPP_REGISTER_METHOD(0x01AEEA30, void, Notify_2, (app::Listeners_1_System_Object_ * this_ptr, app::Int32Enum__Enum arg1, app::Object* arg2, bool arg3, app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Int32Enum_System_Object_System_Boolean_* action))
    IL2CPP_REGISTER_METHOD(0x01AEEC40, void, Notify_3, (app::Listeners_1_System_Object_ * this_ptr, app::Object* arg1, bool arg2, bool arg3, app::Listeners_1_TElem_Action_4_System_Object_System_Object_System_Object_System_Boolean_System_Boolean_* action))
} // namespace app::classes::System::Data::Listeners_1_System_Object_
