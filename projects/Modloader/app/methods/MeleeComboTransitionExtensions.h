#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MeleeComboTransition__Array.h>

namespace app::classes::MeleeComboTransitionExtensions {
    IL2CPP_REGISTER_METHOD(0x009C4FC0, void, GetComboMoves, app::MeleeComboTransition__Array* transitions, app::List_1_Moon_ComboSystem_IComboMove_* moves)
}
