#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_NotificationChecker_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474AAA0, List_1_NotificationChecker___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_NotificationChecker_, GetEnumerator, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04787E00, List_1_NotificationChecker__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717198, List_1_NotificationChecker__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_NotificationChecker_ * this_ptr, app::NotificationChecker* item))
    IL2CPP_REGISTER_METHODINFO(0x04769AD0, List_1_NotificationChecker__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::NotificationChecker*, Find, (app::List_1_NotificationChecker_ * this_ptr, app::Predicate_1_NotificationChecker_* match))
    IL2CPP_REGISTER_METHODINFO(0x04786CE0, List_1_NotificationChecker__Find__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_NotificationChecker_
