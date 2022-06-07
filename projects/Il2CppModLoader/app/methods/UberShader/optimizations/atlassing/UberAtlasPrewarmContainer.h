#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShader::optimizations::atlassing::UberAtlasPrewarmContainer {
    IL2CPP_REGISTER_METHOD(0x018FD0C0, app::UberAtlasPrewarmContainer *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x018FD160, void, Awake, (app::UberAtlasPrewarmContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FD330, void, Update, (app::UberAtlasPrewarmContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018FD3B0, void, ctor, (app::UberAtlasPrewarmContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
