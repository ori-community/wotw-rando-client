#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/HashSet_1_GenericPuppet_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_GenericPuppet_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_GenericPuppet_ {
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_GenericPuppet_, GetEnumerator, app::HashSet_1_GenericPuppet_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_GenericPuppet_* this_ptr, app::GenericPuppet* item)
    IL2CPP_REGISTER_METHOD(0x02ABEC50, bool, Remove, app::HashSet_1_GenericPuppet_* this_ptr, app::GenericPuppet* item)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_GenericPuppet_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_GenericPuppet_
