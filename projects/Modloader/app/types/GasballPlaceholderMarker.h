#pragma once
#include <Modloader/app/structs/GasballPlaceholderMarker.h>
#include <Modloader/app/structs/GasballPlaceholderMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballPlaceholderMarker {
        inline app::GasballPlaceholderMarker__Class** type_info() {
            static app::GasballPlaceholderMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballPlaceholderMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::GasballPlaceholderMarker__Class>(type_info(), "", "GasballPlaceholderMarker");
        }
        inline app::GasballPlaceholderMarker* create() {
            return il2cpp::create_object<app::GasballPlaceholderMarker>(get_class());
        }
    } // namespace GasballPlaceholderMarker
} // namespace app::classes::types
