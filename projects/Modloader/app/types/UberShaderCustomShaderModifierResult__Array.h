#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array__Class.h>
#include <Modloader/app/structs/UberShaderCustomShaderModifierResult__Array.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderModifierResult__Array {
        namespace {
            inline app::UberShaderCustomShaderModifierResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCustomShaderModifierResult__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomShaderModifierResult__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderModifierResult__Array__Class>(type_info, "", "UberShaderCustomShaderModifierResult[]");
        }
        inline app::UberShaderCustomShaderModifierResult__Array* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderModifierResult__Array>(get_class());
        }
    } // namespace UberShaderCustomShaderModifierResult__Array
} // namespace app::classes::types
