#pragma once
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult__Array {
        inline app::UberShaderCustomShaderModifierResult__Array__Class** type_info() {
            static app::UberShaderCustomShaderModifierResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCustomShaderModifierResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCustomShaderModifierResult__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Array__Class>(type_info(), "", "UberShaderCustomShaderModifierResult[]");
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderModifierResult__Array>(get_class());
        }
    } // namespace UberShaderCustomShaderModifierResult__Array
} // namespace app::classes::types
