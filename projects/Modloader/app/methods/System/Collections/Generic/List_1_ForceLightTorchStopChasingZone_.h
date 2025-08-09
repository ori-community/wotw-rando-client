#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ForceLightTorchStopChasingZone.h>
#include <Modloader/app/structs/List_1_ForceLightTorchStopChasingZone_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_ForceLightTorchStopChasingZone_.h>

namespace app::classes::System::Collections::Generic::List_1_ForceLightTorchStopChasingZone_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_ForceLightTorchStopChasingZone_* this_ptr, app::ForceLightTorchStopChasingZone* item)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, app::List_1_ForceLightTorchStopChasingZone_* this_ptr, app::ForceLightTorchStopChasingZone* item)
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_ForceLightTorchStopChasingZone_,
        GetEnumerator,
        app::List_1_ForceLightTorchStopChasingZone_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_ForceLightTorchStopChasingZone_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_ForceLightTorchStopChasingZone_
