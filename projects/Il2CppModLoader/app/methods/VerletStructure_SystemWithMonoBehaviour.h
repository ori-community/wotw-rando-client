#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::VerletStructure_SystemWithMonoBehaviour {
    IL2CPP_REGISTER_METHOD(0x013CF520, void, ctor, (app::VerletStructure_SystemWithMonoBehaviour * this_ptr, app::VerletStructure__Array * entities))
    IL2CPP_REGISTER_METHOD(0x013CF7C0, void, Finalize, (app::VerletStructure_SystemWithMonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084CC20, void, Dispose, (app::VerletStructure_SystemWithMonoBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013CF850, void, Execute, (app::VerletStructure_SystemWithMonoBehaviour * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x013CFC80, void, ExecuteLate, (app::VerletStructure_SystemWithMonoBehaviour * this_ptr, float dt))
}
