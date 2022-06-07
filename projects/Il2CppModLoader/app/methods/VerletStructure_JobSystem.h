#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletStructure_JobSystem {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::VerletStructure_JobSystem * this_ptr, app::VerletStructure__Array * entities))
    IL2CPP_REGISTER_METHOD(0x013CEDE0, void, Finalize, (app::VerletStructure_JobSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CEE80, void, Dispose, (app::VerletStructure_JobSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CEEB0, void, Execute, (app::VerletStructure_JobSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHODINFO(0x04754308, VerletStructure_JobSystem_Execute__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013CF190, void, ExecuteLate, (app::VerletStructure_JobSystem * this_ptr, float dt))
    IL2CPP_REGISTER_METHODINFO(0x0473E548, VerletStructure_JobSystem_ExecuteLate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x013CF300, void, cctor, ())
}
