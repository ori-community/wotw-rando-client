#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IEnumerable_1_System_Exception_.h>
#include <Modloader/app/structs/List_1_System_Exception_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Exception_ {
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_1, app::List_1_System_Exception_* this_ptr, app::IEnumerable_1_System_Exception_* collection)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_System_Exception_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Exception_* this_ptr, app::Exception* item)
} // namespace app::classes::System::Collections::Generic::List_1_System_Exception_
