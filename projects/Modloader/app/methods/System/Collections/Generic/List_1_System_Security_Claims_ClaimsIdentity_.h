#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Security_Claims_ClaimsIdentity_.h>
#include <Modloader/app/structs/ClaimsIdentity.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Security_Claims_ClaimsIdentity_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Security_Claims_ClaimsIdentity_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_System_Security_Claims_ClaimsIdentity_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_System_Security_Claims_ClaimsIdentity_ * this_ptr, app::ClaimsIdentity* item))
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_Security_Claims_ClaimsIdentity_, GetEnumerator, (app::List_1_System_Security_Claims_ClaimsIdentity_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_System_Security_Claims_ClaimsIdentity_
