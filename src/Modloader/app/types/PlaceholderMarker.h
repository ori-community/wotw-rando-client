#pragma once
#include <Modloader/app/structs/PlaceholderMarker.h>
#include <Modloader/app/structs/PlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlaceholderMarker {
        inline app::PlaceholderMarker__Class** type_info() {
            static app::PlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PlaceholderMarker__Class>(type_info(), "", "PlaceholderMarker");
        }
        inline app::PlaceholderMarker* create() {
            return il2cpp::create_object<app::PlaceholderMarker>(get_class());
        }
    } // namespace PlaceholderMarker
} // namespace app::classes::types
