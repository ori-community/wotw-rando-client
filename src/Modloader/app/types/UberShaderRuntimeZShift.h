#pragma once
#include <Modloader/app/structs/UberShaderRuntimeZShift.h>
#include <Modloader/app/structs/UberShaderRuntimeZShift__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderRuntimeZShift {
        inline app::UberShaderRuntimeZShift__Class** type_info() {
            static app::UberShaderRuntimeZShift__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderRuntimeZShift__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderRuntimeZShift__Class* get_class() {
            return il2cpp::get_class<app::UberShaderRuntimeZShift__Class>(type_info(), "", "UberShaderRuntimeZShift");
        }
        inline app::UberShaderRuntimeZShift* create() {
            return il2cpp::create_object<app::UberShaderRuntimeZShift>(get_class());
        }
    } // namespace UberShaderRuntimeZShift
} // namespace app::classes::types
