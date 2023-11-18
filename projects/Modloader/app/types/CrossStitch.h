#pragma once
#include <Modloader/app/structs/CrossStitch.h>
#include <Modloader/app/structs/CrossStitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossStitch {
        inline app::CrossStitch__Class** type_info() {
            static app::CrossStitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrossStitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrossStitch__Class* get_class() {
            return il2cpp::get_class<app::CrossStitch__Class>(type_info(), "Colorful", "CrossStitch");
        }
        inline app::CrossStitch* create() {
            return il2cpp::create_object<app::CrossStitch>(get_class());
        }
    } // namespace CrossStitch
} // namespace app::classes::types
