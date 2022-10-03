#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtKitLink {
        namespace {
            app::ArtKitLink__Class* type_info_ref = nullptr;
        }
        app::ArtKitLink__Class** type_info = &type_info_ref;
        inline app::ArtKitLink__Class* get_class() {
            return il2cpp::get_class<app::ArtKitLink__Class>(type_info, "Moon.EditorTools.ArtKit", "ArtKitLink");
        }
        inline app::ArtKitLink* create() {
            return il2cpp::create_object<app::ArtKitLink>(get_class());
        }
    } // namespace ArtKitLink
} // namespace app::classes::types
