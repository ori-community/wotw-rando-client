#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::VerletStructureStateModifier {
    IL2CPP_REGISTER_METHOD(0x013D3240, void, Apply, (app::VerletStructureStateModifier * this_ptr, app::MoonReference_1_UnityEngine_GameObject_* target, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x013D3450, void, ctor, (app::VerletStructureStateModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D3470, app::Dictionary_2_System_Int32_System_Type_*, GetIdToTypeMap, (app::VerletStructureStateModifier * this_ptr))
} // namespace app::classes::VerletStructureStateModifier
