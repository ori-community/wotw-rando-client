#pragma once
#include <Modloader/app/structs/SmoothLinesPlugin.h>
#include <Modloader/app/structs/SmoothLinesPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SmoothLinesPlugin {
        inline app::SmoothLinesPlugin__Class** type_info() {
            static app::SmoothLinesPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SmoothLinesPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SmoothLinesPlugin__Class* get_class() {
            return il2cpp::get_class<app::SmoothLinesPlugin__Class>(type_info(), "", "SmoothLinesPlugin");
        }
        inline app::SmoothLinesPlugin* create() {
            return il2cpp::create_object<app::SmoothLinesPlugin>(get_class());
        }
    } // namespace SmoothLinesPlugin
} // namespace app::classes::types
