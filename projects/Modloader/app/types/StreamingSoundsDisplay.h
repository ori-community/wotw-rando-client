#pragma once
#include <Modloader/app/structs/StreamingSoundsDisplay.h>
#include <Modloader/app/structs/StreamingSoundsDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StreamingSoundsDisplay {
        inline app::StreamingSoundsDisplay__Class** type_info() {
            static app::StreamingSoundsDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StreamingSoundsDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StreamingSoundsDisplay__Class* get_class() {
            return il2cpp::get_class<app::StreamingSoundsDisplay__Class>(type_info(), "", "StreamingSoundsDisplay");
        }
        inline app::StreamingSoundsDisplay* create() {
            return il2cpp::create_object<app::StreamingSoundsDisplay>(get_class());
        }
    } // namespace StreamingSoundsDisplay
} // namespace app::classes::types
