#pragma once
#include <Modloader/app/structs/ArtKit.h>
#include <Modloader/app/structs/ArtKit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtKit {
        inline app::ArtKit__Class** type_info() {
            static app::ArtKit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtKit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtKit__Class* get_class() {
            return il2cpp::get_class<app::ArtKit__Class>(type_info(), "Moon.EditorTools.ArtKit", "ArtKit");
        }
        inline app::ArtKit* create() {
            return il2cpp::create_object<app::ArtKit>(get_class());
        }
    } // namespace ArtKit
} // namespace app::classes::types
