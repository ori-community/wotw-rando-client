#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtKit {
        namespace {
            app::ArtKit__Class* type_info_ref = nullptr;
        }
        app::ArtKit__Class** type_info = &type_info_ref;
        inline app::ArtKit__Class* get_class() {
            return il2cpp::get_class<app::ArtKit__Class>(type_info, "Moon.EditorTools.ArtKit", "ArtKit");
        }
        inline app::ArtKit* create() {
            return il2cpp::create_object<app::ArtKit>(get_class());
        }
    } // namespace ArtKit
} // namespace app::classes::types
