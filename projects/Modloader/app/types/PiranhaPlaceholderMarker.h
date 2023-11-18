#pragma once
#include <Modloader/app/structs/PiranhaPlaceholderMarker.h>
#include <Modloader/app/structs/PiranhaPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaPlaceholderMarker {
        inline app::PiranhaPlaceholderMarker__Class** type_info() {
            static app::PiranhaPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::PiranhaPlaceholderMarker__Class>(type_info(), "", "PiranhaPlaceholderMarker");
        }
        inline app::PiranhaPlaceholderMarker* create() {
            return il2cpp::create_object<app::PiranhaPlaceholderMarker>(get_class());
        }
    } // namespace PiranhaPlaceholderMarker
} // namespace app::classes::types
