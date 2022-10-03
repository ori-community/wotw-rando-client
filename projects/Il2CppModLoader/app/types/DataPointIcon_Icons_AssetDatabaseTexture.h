#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataPointIcon_Icons_AssetDatabaseTexture {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DataPointIcon_Icons_AssetDatabaseTexture__Class** type_info;
        inline app::DataPointIcon_Icons_AssetDatabaseTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::DataPointIcon_Icons_AssetDatabaseTexture__Class>(type_info, "Moon.Telemetry", "DataPointIcon+Icons", "AssetDatabaseTexture");
        }
        inline app::DataPointIcon_Icons_AssetDatabaseTexture* create() {
            return il2cpp::create_object<app::DataPointIcon_Icons_AssetDatabaseTexture>(get_class());
        }
    } // namespace DataPointIcon_Icons_AssetDatabaseTexture
} // namespace app::classes::types
