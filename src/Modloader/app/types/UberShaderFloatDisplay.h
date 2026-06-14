#pragma once
#include <Modloader/app/structs/UberShaderFloatDisplay.h>
#include <Modloader/app/structs/UberShaderFloatDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderFloatDisplay {
        inline app::UberShaderFloatDisplay__Class** type_info() {
            static app::UberShaderFloatDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderFloatDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderFloatDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderFloatDisplay__Class>(type_info(), "", "UberShaderFloatDisplay");
        }
        inline app::UberShaderFloatDisplay* create() {
            return il2cpp::create_object<app::UberShaderFloatDisplay>(get_class());
        }
    } // namespace UberShaderFloatDisplay
} // namespace app::classes::types
