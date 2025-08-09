#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataPointIcon_Icons_AssetDatabaseTexture.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::Moon::Telemetry::DataPointIcon_Icons_AssetDatabaseTexture {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Texture2D*, get_Texture, app::DataPointIcon_Icons_AssetDatabaseTexture* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DataPointIcon_Icons_AssetDatabaseTexture* this_ptr, app::String* path)
} // namespace app::classes::Moon::Telemetry::DataPointIcon_Icons_AssetDatabaseTexture
