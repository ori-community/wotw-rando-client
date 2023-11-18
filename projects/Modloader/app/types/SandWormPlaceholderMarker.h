#pragma once
#include <Modloader/app/structs/SandWormPlaceholderMarker.h>
#include <Modloader/app/structs/SandWormPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormPlaceholderMarker {
        inline app::SandWormPlaceholderMarker__Class** type_info() {
            static app::SandWormPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SandWormPlaceholderMarker__Class>(type_info(), "", "SandWormPlaceholderMarker");
        }
        inline app::SandWormPlaceholderMarker* create() {
            return il2cpp::create_object<app::SandWormPlaceholderMarker>(get_class());
        }
    } // namespace SandWormPlaceholderMarker
} // namespace app::classes::types
