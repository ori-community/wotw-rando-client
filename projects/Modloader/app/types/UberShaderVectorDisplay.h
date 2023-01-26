#pragma once
#include <Modloader/app/structs/UberShaderVectorDisplay.h>
#include <Modloader/app/structs/UberShaderVectorDisplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderVectorDisplay {
        inline app::UberShaderVectorDisplay__Class** type_info() {
            static app::UberShaderVectorDisplay__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderVectorDisplay__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderVectorDisplay__Class* get_class() {
            return il2cpp::get_class<app::UberShaderVectorDisplay__Class>(type_info(), "", "UberShaderVectorDisplay");
        }
        inline app::UberShaderVectorDisplay* create() {
            return il2cpp::create_object<app::UberShaderVectorDisplay>(get_class());
        }
    } // namespace UberShaderVectorDisplay
} // namespace app::classes::types
