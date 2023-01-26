#pragma once
#include <Modloader/app/structs/SeedPlaceholderMarker.h>
#include <Modloader/app/structs/SeedPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeedPlaceholderMarker {
        inline app::SeedPlaceholderMarker__Class** type_info() {
            static app::SeedPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeedPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeedPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SeedPlaceholderMarker__Class>(type_info(), "", "SeedPlaceholderMarker");
        }
        inline app::SeedPlaceholderMarker* create() {
            return il2cpp::create_object<app::SeedPlaceholderMarker>(get_class());
        }
    } // namespace SeedPlaceholderMarker
} // namespace app::classes::types
