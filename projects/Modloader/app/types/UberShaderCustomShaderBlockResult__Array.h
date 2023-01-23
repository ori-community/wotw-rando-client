#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array__Class.h>
#include <Modloader/app/structs/UberShaderCustomShaderBlockResult__Array.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderBlockResult__Array {
        namespace {
            inline app::UberShaderCustomShaderBlockResult__Array__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderCustomShaderBlockResult__Array__Class** type_info = &type_info_ref;
        inline app::UberShaderCustomShaderBlockResult__Array__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderBlockResult__Array__Class>(type_info, "", "UberShaderCustomShaderBlockResult[]");
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderBlockResult__Array>(get_class());
        }
    } // namespace UberShaderCustomShaderBlockResult__Array
} // namespace app::classes::types
