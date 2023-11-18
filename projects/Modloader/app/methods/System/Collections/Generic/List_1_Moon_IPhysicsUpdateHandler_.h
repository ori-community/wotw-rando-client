#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_IPhysicsUpdateHandler_.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler.h>
#include <Modloader/app/structs/IPhysicsUpdateHandler__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_IPhysicsUpdateHandler_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_IPhysicsUpdateHandler_ * this_ptr, app::IPhysicsUpdateHandler* item))
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::IPhysicsUpdateHandler__Array*, ToArray, (app::List_1_Moon_IPhysicsUpdateHandler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_IPhysicsUpdateHandler_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_IPhysicsUpdateHandler_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::List_1_Moon_IPhysicsUpdateHandler_
