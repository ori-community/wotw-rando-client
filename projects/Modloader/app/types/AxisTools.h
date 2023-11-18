#pragma once
#include <Modloader/app/structs/AxisTools.h>
#include <Modloader/app/structs/AxisTools__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisTools {
        inline app::AxisTools__Class** type_info() {
            static app::AxisTools__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisTools__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisTools__Class* get_class() {
            return il2cpp::get_class<app::AxisTools__Class>(type_info(), "RootMotion", "AxisTools");
        }
        inline app::AxisTools* create() {
            return il2cpp::create_object<app::AxisTools>(get_class());
        }
    } // namespace AxisTools
} // namespace app::classes::types
