#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IOneDSTransportPlugin.h>
#include <Modloader/app/structs/IPlayFabPlugin.h>
#include <Modloader/app/structs/IPlayFabTransportPlugin.h>
#include <Modloader/app/structs/ISerializerPlugin.h>
#include <Modloader/app/structs/ITransportPlugin.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PluginContract__Enum.h>
#include <Modloader/app/structs/PluginManager.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::PluginManager {
    IL2CPP_REGISTER_METHOD(0x01AD03E0, void, ctor, app::PluginManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD0680, void, SetPlugin, app::IPlayFabPlugin* plugin, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(
        0x01AD0850,
        app::IPlayFabPlugin*,
        GetPluginInternal,
        app::PluginManager* this_ptr,
        app::PluginContract__Enum contract,
        app::String* instance_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01AD0B30,
        void,
        SetPluginInternal,
        app::PluginManager* this_ptr,
        app::IPlayFabPlugin* plugin,
        app::PluginContract__Enum contract,
        app::String* instance_name
    )
    IL2CPP_REGISTER_METHOD(0x01AD0C60, app::ITransportPlugin*, CreatePlayFabTransportPlugin, app::PluginManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD0E90, app::IOneDSTransportPlugin*, CreateOneDSTransportPlugin, app::PluginManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01AD10C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x016AA130, app::Object*, GetPlugin_1, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(0x018F0E40, app::IPlayFabPlugin*, CreatePlugin_1, app::PluginManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA130, app::ISerializerPlugin*, GetPlugin_2, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(0x016AA130, app::ITransportPlugin*, GetPlugin_3, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(0x016AA130, app::IPlayFabTransportPlugin*, GetPlugin_4, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(0x016AA130, app::IOneDSTransportPlugin*, GetPlugin_5, app::PluginContract__Enum contract, app::String* instance_name)
    IL2CPP_REGISTER_METHOD(0x018F0E40, app::IPlayFabPlugin*, CreatePlugin_2, app::PluginManager* this_ptr)
} // namespace app::classes::PlayFab::PluginManager
