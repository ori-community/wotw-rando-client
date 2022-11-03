#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CageStructureToolStressTester {
    IL2CPP_REGISTER_METHOD(0x0167FEC0, void, OnValidate, (app::CageStructureToolStressTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01680340, void, Update, (app::CageStructureToolStressTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01680540, void, OnGUI, (app::CageStructureToolStressTester * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016809A0, void, ctor, (app::CageStructureToolStressTester * this_ptr))
} // namespace app::classes::CageStructureToolStressTester
