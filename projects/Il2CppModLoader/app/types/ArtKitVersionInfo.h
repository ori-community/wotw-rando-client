#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtKitVersionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArtKitVersionInfo__Class** type_info;
        inline app::ArtKitVersionInfo__Class* get_class() {
            return il2cpp::get_class<app::ArtKitVersionInfo__Class>(type_info, "Moon.EditorTools.ArtKit", "ArtKitVersionInfo");
        }
        inline app::ArtKitVersionInfo* create() {
            return il2cpp::create_object<app::ArtKitVersionInfo>(get_class());
        }
        inline app::ArtKitVersionInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ArtKitVersionInfo__Array>(get_class(), size);
        }
        inline app::ArtKitVersionInfo__Array* create_array(const std::vector<app::ArtKitVersionInfo*>& items) {
            return il2cpp::array_new<app::ArtKitVersionInfo__Array>(get_class(), items);
        }
    } // namespace ArtKitVersionInfo
} // namespace app::classes::types
