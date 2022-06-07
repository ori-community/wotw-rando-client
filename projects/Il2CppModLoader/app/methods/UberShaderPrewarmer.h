#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShaderPrewarmer {
    IL2CPP_REGISTER_METHOD(0x019149B0, bool, get_IsLoaded, ())
    IL2CPP_REGISTER_METHOD(0x01914AD0, float, get_LoadProgress, ())
    IL2CPP_REGISTER_METHOD(0x01914BF0, float, get_WarmProgress, ())
    IL2CPP_REGISTER_METHOD(0x01914D80, float, get_TotalProgress, ())
    IL2CPP_REGISTER_METHOD(0x01914E40, void, Load, ())
    IL2CPP_REGISTER_METHOD(0x01914F90, void, Unload, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01915520, void, Awake, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019158A0, void, WarmShader_1, (app::UberShaderPrewarmer * this_ptr, app::String * shader_name, app::List_1_System_String_ * keywords))
    IL2CPP_REGISTER_METHOD(0x01915A00, void, OnStreamStart, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01915B50, void, CreateResources, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01915FA0, void, OnStreamDone, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01916160, void, StartWarmingStream, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019162B0, void, Update, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019162C0, void, UpdateStream, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01916600, bool, _isMemoryExceeded, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019166A0, bool, WarmNextShader, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01916790, void, WarmShader_2, (app::UberShaderPrewarmer * this_ptr, app::Shader * shader, app::List_1_System_String_ * keywords))
    IL2CPP_REGISTER_METHOD(0x01916DB0, void, ctor, (app::UberShaderPrewarmer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01916FD0, void, cctor, ())
}
