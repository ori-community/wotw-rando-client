#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerletStructure_VerletStructureState.h>
#include <Modloader/app/structs/VerletStructure.h>

namespace app::classes::VerletStructure_VerletStructureState {
    IL2CPP_REGISTER_METHOD(0x013D2E40, void, Init, (app::VerletStructure_VerletStructureState * this_ptr, app::VerletStructure* structure))
    IL2CPP_REGISTER_METHOD(0x013D3180, void, Apply, (app::VerletStructure_VerletStructureState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D31B0, void, ctor, (app::VerletStructure_VerletStructureState * this_ptr))
} // namespace app::classes::VerletStructure_VerletStructureState
