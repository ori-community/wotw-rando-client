#pragma once
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderBlockResult__Array {
        inline app::UberShaderCustomShaderBlockResult__Array__Class** type_info() {
            static app::UberShaderCustomShaderBlockResult__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderCustomShaderBlockResult__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderCustomShaderBlockResult__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderBlockResult__Array__Class>(type_info(), "", "UberShaderCustomShaderBlockResult[]");
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderBlockResult__Array>(get_class());
        }
    } // namespace UberShaderCustomShaderBlockResult__Array
} // namespace app::classes::types
