#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberCageMesh.h>

namespace app::classes::UberCageMesh {
    IL2CPP_REGISTER_METHOD(0x013E5270, void, OnEnable, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CageFromMesh, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMesh, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberCageMesh * this_ptr))
} // namespace app::classes::UberCageMesh
