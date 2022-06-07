#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SceneComponentTracker {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SceneComponentTracker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C3BD0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01555900, void, Register_1, (app::Object * component))
    IL2CPP_REGISTER_METHOD(0x01555A00, void, Unregister_1, (app::Object * component))
    IL2CPP_REGISTER_METHOD(0x01EB9E40, app::List_1_System_Object_ *, GetAll, ())
    IL2CPP_REGISTER_METHOD(0x018EC750, app::GenericComponentTracker_1_System_Object_ *, GetTracker, ())
    IL2CPP_REGISTER_METHOD(0x01555660, void, EnsureTrackerTypeExistence, ())
    IL2CPP_REGISTER_METHOD(0x01555900, void, Register_2, (app::NewSetupStateController * component))
    IL2CPP_REGISTER_METHODINFO(0x0471CE08, SceneComponentTracker_Register_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01555A00, void, Unregister_2, (app::NewSetupStateController * component))
    IL2CPP_REGISTER_METHODINFO(0x0473F648, SceneComponentTracker_Unregister_1__MethodInfo)
}
