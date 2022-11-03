#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataPointIcon_Icons_AssetDatabaseTexture {
        inline app::DataPointIcon_Icons_AssetDatabaseTexture__Class** type_info = (app::DataPointIcon_Icons_AssetDatabaseTexture__Class**)(modloader::win::memory::resolve_rva(0x0470E868));
        inline app::DataPointIcon_Icons_AssetDatabaseTexture__Class* get_class() {
            return il2cpp::get_nested_class<app::DataPointIcon_Icons_AssetDatabaseTexture__Class>(type_info, "Moon.Telemetry", "DataPointIcon+Icons", "AssetDatabaseTexture");
        }
        inline app::DataPointIcon_Icons_AssetDatabaseTexture* create() {
            return il2cpp::create_object<app::DataPointIcon_Icons_AssetDatabaseTexture>(get_class());
        }
    } // namespace DataPointIcon_Icons_AssetDatabaseTexture
} // namespace app::classes::types
