#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_TypeIdentifier_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_TypeIdentifier_.h>
#include <Modloader/app/structs/TypeIdentifier.h>

namespace app::classes::System::Collections::Generic::List_1_System_TypeIdentifier_ {
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_System_TypeIdentifier_, GetEnumerator, app::List_1_System_TypeIdentifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_TypeIdentifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_TypeIdentifier_* this_ptr, app::TypeIdentifier* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_TypeIdentifier_
