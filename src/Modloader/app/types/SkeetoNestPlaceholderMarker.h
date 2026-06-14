#pragma once
#include <Modloader/app/structs/SkeetoNestPlaceholderMarker.h>
#include <Modloader/app/structs/SkeetoNestPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoNestPlaceholderMarker {
        inline app::SkeetoNestPlaceholderMarker__Class** type_info() {
            static app::SkeetoNestPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkeetoNestPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkeetoNestPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestPlaceholderMarker__Class>(type_info(), "", "SkeetoNestPlaceholderMarker");
        }
        inline app::SkeetoNestPlaceholderMarker* create() {
            return il2cpp::create_object<app::SkeetoNestPlaceholderMarker>(get_class());
        }
    } // namespace SkeetoNestPlaceholderMarker
} // namespace app::classes::types
