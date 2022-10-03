#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CageStructureToolFill {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnModified, (app::CageStructureToolFill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMesh, (app::CageStructureToolFill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::CageStructureToolFill * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CageStructureToolFill * this_ptr))
} // namespace app::classes::CageStructureToolFill
