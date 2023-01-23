#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_VerletStructure_VerletLink_.h>
#include <Modloader/app/structs/VerletStructure_VerletLink.h>
#include <Modloader/app/structs/VerletStructure_VerletLink__Array.h>

namespace app::classes::System::Collections::Generic::List_1_VerletStructure_VerletLink_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_VerletStructure_VerletLink_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D570, List_1_VerletStructure_VerletLink___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_VerletStructure_VerletLink_ * this_ptr, app::VerletStructure_VerletLink* item))
    IL2CPP_REGISTER_METHODINFO(0x0477B158, List_1_VerletStructure_VerletLink__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::VerletStructure_VerletLink__Array*, ToArray, (app::List_1_VerletStructure_VerletLink_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047872B0, List_1_VerletStructure_VerletLink__ToArray__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_VerletStructure_VerletLink_
