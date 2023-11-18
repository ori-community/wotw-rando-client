#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_Moon_IRectProvider_.h>
#include <Modloader/app/structs/IRectProvider.h>

namespace app::classes::System::Collections::Generic::HashSet_1_Moon_IRectProvider_ {
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_Moon_IRectProvider_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_Moon_IRectProvider_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_Moon_IRectProvider_, GetEnumerator, (app::HashSet_1_Moon_IRectProvider_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_Moon_IRectProvider_ * this_ptr, app::IRectProvider* item))
} // namespace app::classes::System::Collections::Generic::HashSet_1_Moon_IRectProvider_
