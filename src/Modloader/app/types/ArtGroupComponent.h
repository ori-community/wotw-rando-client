#pragma once
#include <Modloader/app/structs/ArtGroupComponent.h>
#include <Modloader/app/structs/ArtGroupComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtGroupComponent {
        inline app::ArtGroupComponent__Class** type_info() {
            static app::ArtGroupComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtGroupComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtGroupComponent__Class* get_class() {
            return il2cpp::get_class<app::ArtGroupComponent__Class>(type_info(), "Moon.EditorTools.SmartSelection", "ArtGroupComponent");
        }
        inline app::ArtGroupComponent* create() {
            return il2cpp::create_object<app::ArtGroupComponent>(get_class());
        }
    } // namespace ArtGroupComponent
} // namespace app::classes::types
