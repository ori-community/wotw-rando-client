#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AssetUtility {
    IL2CPP_REGISTER_METHOD(0x00841C30, app::String*, GetAssetName, (app::String * asset_path))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AssetUtility * this_ptr))
} // namespace app::classes::AssetUtility
