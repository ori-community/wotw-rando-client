#pragma once
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult {
        inline app::UberShaderCustomShaderModifierResult__Class** type_info() {
            static app::UberShaderCustomShaderModifierResult__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCustomShaderModifierResult__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCustomShaderModifierResult__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Class>(type_info(), "", "UberShaderCustomShaderModifierResult");
        }
        inline app::UberShaderCustomShaderModifierResult* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderModifierResult>(get_class());
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCustomShaderModifierResult__Array>(get_class(), size);
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create_array(const std::vector<app::UberShaderCustomShaderModifierResult*>& items) {
            return il2cpp::array_new<app::UberShaderCustomShaderModifierResult__Array>(get_class(), items);
        }
    } // namespace UberShaderCustomShaderModifierResult
} // namespace app::classes::types
