#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AssetBundle.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::UnityEngine::AssetBundle {
    IL2CPP_REGISTER_METHOD(0x031C3A30, void, ctor, (app::AssetBundle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C3AC0, app::Object_1*, get_mainAsset, (app::AssetBundle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031C3AC0, app::Object_1*, returnMainAsset, (app::AssetBundle * bundle))
    IL2CPP_REGISTER_METHOD(0x031C3B10, app::AssetBundle*, LoadFromMemory_Internal, (app::Byte__Array * binary, uint32_t crc))
    IL2CPP_REGISTER_METHOD(0x031C3B70, app::AssetBundle*, LoadFromMemory, (app::Byte__Array * binary))
} // namespace app::classes::UnityEngine::AssetBundle
