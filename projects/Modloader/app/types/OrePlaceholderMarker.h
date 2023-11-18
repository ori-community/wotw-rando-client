#pragma once
#include <Modloader/app/structs/OrePlaceholderMarker.h>
#include <Modloader/app/structs/OrePlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OrePlaceholderMarker {
        inline app::OrePlaceholderMarker__Class** type_info() {
            static app::OrePlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OrePlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OrePlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::OrePlaceholderMarker__Class>(type_info(), "", "OrePlaceholderMarker");
        }
        inline app::OrePlaceholderMarker* create() {
            return il2cpp::create_object<app::OrePlaceholderMarker>(get_class());
        }
    } // namespace OrePlaceholderMarker
} // namespace app::classes::types
