#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_.h>
#include <Modloader/app/structs/IEqualityComparer_1_PlayFab_PluginContractKey_.h>
#include <Modloader/app/structs/IPlayFabPlugin.h>
#include <Modloader/app/structs/PluginContractKey.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_ {
    IL2CPP_REGISTER_METHOD(
        0x0283AC50,
        void,
        ctor,
        app::Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* this_ptr,
        app::IEqualityComparer_1_PlayFab_PluginContractKey_* comparer
    )
    IL2CPP_REGISTER_METHOD(
        0x0283D820,
        bool,
        TryGetValue,
        app::Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* this_ptr,
        app::PluginContractKey key,
        app::IPlayFabPlugin** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B630,
        void,
        set_Item,
        app::Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_* this_ptr,
        app::PluginContractKey key,
        app::IPlayFabPlugin* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_PlayFab_PluginContractKey_PlayFab_IPlayFabPlugin_
