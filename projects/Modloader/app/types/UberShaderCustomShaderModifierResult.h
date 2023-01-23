#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Class.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult {
        namespace {
            inline app::UberShaderCustomShaderModifierResult__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCustomShaderModifierResult__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomShaderModifierResult__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Class>(type_info, "", "UberShaderCustomShaderModifierResult");
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
