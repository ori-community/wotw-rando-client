#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DownloadHandlerAssetBundle.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AssetBundle.h>

namespace app::classes::UnityEngine::Networking::DownloadHandlerAssetBundle {
    IL2CPP_REGISTER_METHOD(0x031C45A0, app::Byte__Array*, GetData, (app::DownloadHandlerAssetBundle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047662F0, DownloadHandlerAssetBundle_GetData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031C4600, app::String*, GetText, (app::DownloadHandlerAssetBundle * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717AA0, DownloadHandlerAssetBundle_GetText__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x031C4660, app::AssetBundle*, get_assetBundle, (app::DownloadHandlerAssetBundle * this_ptr))
} // namespace app::classes::UnityEngine::Networking::DownloadHandlerAssetBundle
