#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberCageMesh {
    IL2CPP_REGISTER_METHOD(0x013E5270, void, OnEnable, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CageFromMesh, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMesh, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470CB00, UberCageMesh_UpdateMesh__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::UberCageMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberCageMesh * this_ptr))
}
