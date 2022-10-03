#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberCageGrid {
    IL2CPP_REGISTER_METHOD(0x013E4880, void, OnEnable, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4A40, void, Reset, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4A50, void, GenerateCageGrid, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMesh, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473C428, UberCageGrid_UpdateMesh__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E51A0, void, ctor, (app::UberCageGrid * this_ptr))
} // namespace app::classes::UberCageGrid
