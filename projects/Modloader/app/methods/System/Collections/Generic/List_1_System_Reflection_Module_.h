#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Reflection_Module_.h>
#include <Modloader/app/structs/Module.h>
#include <Modloader/app/structs/Module__Array.h>

namespace app::classes::System::Collections::Generic::List_1_System_Reflection_Module_ {
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor, app::List_1_System_Reflection_Module_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Reflection_Module_* this_ptr, app::Module* item)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Module__Array*, ToArray, app::List_1_System_Reflection_Module_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_System_Reflection_Module_
