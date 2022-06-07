#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletStructure_VerletStructureState {
    IL2CPP_REGISTER_METHOD(0x013D2E40, void, Init, (app::VerletStructure_VerletStructureState * this_ptr, app::VerletStructure * structure))
    IL2CPP_REGISTER_METHOD(0x013D3180, void, Apply, (app::VerletStructure_VerletStructureState * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762EE0, VerletStructure_VerletStructureState_Apply__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013D31B0, void, ctor, (app::VerletStructure_VerletStructureState * this_ptr))
}
