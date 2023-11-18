#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberCageGrid.h>

namespace app::classes::UberCageGrid {
    IL2CPP_REGISTER_METHOD(0x013E4880, void, OnEnable, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4A40, void, Reset, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4A50, void, GenerateCageGrid, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMesh, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::UberCageGrid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E51A0, void, ctor, (app::UberCageGrid * this_ptr))
} // namespace app::classes::UberCageGrid
