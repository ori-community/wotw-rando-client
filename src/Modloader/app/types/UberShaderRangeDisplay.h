#pragma once
#include <Modloader/app/structs/UberShaderRangeDisplay.h>
#include <Modloader/app/structs/UberShaderRangeDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRangeDisplay {
        inline app::UberShaderRangeDisplay__Class** type_info() {
            static app::UberShaderRangeDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderRangeDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderRangeDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRangeDisplay__Class>(type_info(), "", "UberShaderRangeDisplay");
        }
        inline app::UberShaderRangeDisplay* create() {
            return il2cpp::create_object<app::UberShaderRangeDisplay>(get_class());
        }
    } // namespace UberShaderRangeDisplay
} // namespace app::classes::types
