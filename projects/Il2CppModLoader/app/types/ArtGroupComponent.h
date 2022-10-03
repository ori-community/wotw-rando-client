#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtGroupComponent {
        namespace {
            app::ArtGroupComponent__Class* type_info_ref = nullptr;
        }
        app::ArtGroupComponent__Class** type_info = &type_info_ref;
        inline app::ArtGroupComponent__Class* get_class() {
            return il2cpp::get_class<app::ArtGroupComponent__Class>(type_info, "Moon.EditorTools.SmartSelection", "ArtGroupComponent");
        }
        inline app::ArtGroupComponent* create() {
            return il2cpp::create_object<app::ArtGroupComponent>(get_class());
        }
    } // namespace ArtGroupComponent
} // namespace app::classes::types
