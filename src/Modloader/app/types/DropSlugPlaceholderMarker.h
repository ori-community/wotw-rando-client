#pragma once
#include <Modloader/app/structs/DropSlugPlaceholderMarker.h>
#include <Modloader/app/structs/DropSlugPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugPlaceholderMarker {
        inline app::DropSlugPlaceholderMarker__Class** type_info() {
            static app::DropSlugPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::DropSlugPlaceholderMarker__Class>(type_info(), "", "DropSlugPlaceholderMarker");
        }
        inline app::DropSlugPlaceholderMarker* create() {
            return il2cpp::create_object<app::DropSlugPlaceholderMarker>(get_class());
        }
    } // namespace DropSlugPlaceholderMarker
} // namespace app::classes::types
