#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_NotificationChecker_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_NotificationChecker_.h>
#include <Modloader/app/structs/NotificationChecker.h>
#include <Modloader/app/structs/Predicate_1_NotificationChecker_.h>

namespace app::classes::System::Collections::Generic::List_1_NotificationChecker_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_NotificationChecker_, GetEnumerator, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_NotificationChecker_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_NotificationChecker_ * this_ptr, app::NotificationChecker* item))
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::NotificationChecker*, Find, (app::List_1_NotificationChecker_ * this_ptr, app::Predicate_1_NotificationChecker_* match))
} // namespace app::classes::System::Collections::Generic::List_1_NotificationChecker_
