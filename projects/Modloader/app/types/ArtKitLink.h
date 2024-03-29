#pragma once
#include <Modloader/app/structs/ArtKitLink.h>
#include <Modloader/app/structs/ArtKitLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtKitLink {
        inline app::ArtKitLink__Class** type_info() {
            static app::ArtKitLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtKitLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtKitLink__Class* get_class() {
            return il2cpp::get_class<app::ArtKitLink__Class>(type_info(), "Moon.EditorTools.ArtKit", "ArtKitLink");
        }
        inline app::ArtKitLink* create() {
            return il2cpp::create_object<app::ArtKitLink>(get_class());
        }
    } // namespace ArtKitLink
} // namespace app::classes::types
