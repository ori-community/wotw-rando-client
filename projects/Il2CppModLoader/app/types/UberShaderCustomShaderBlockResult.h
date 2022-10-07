#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderCustomShaderBlockResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderCustomShaderBlockResult__Class** type_info;
        inline app::UberShaderCustomShaderBlockResult__Class* get_class() {
            return il2cpp::get_class<app::UberShaderCustomShaderBlockResult__Class>(type_info, "", "UberShaderCustomShaderBlockResult");
        }
        inline app::UberShaderCustomShaderBlockResult* create() {
            return il2cpp::create_object<app::UberShaderCustomShaderBlockResult>(get_class());
        }
        inline app::UberShaderCustomShaderBlockResult__Boxed* box(app::UberShaderCustomShaderBlockResult value) {
            return il2cpp::box_value<app::UberShaderCustomShaderBlockResult__Boxed>(get_class(), value);
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderCustomShaderBlockResult__Array>(get_class(), size);
        }
        inline app::UberShaderCustomShaderBlockResult__Array* create_array(const std::vector<app::UberShaderCustomShaderBlockResult>& items) {
            return il2cpp::array_new<app::UberShaderCustomShaderBlockResult__Array>(get_class(), items);
        }
    } // namespace UberShaderCustomShaderBlockResult
} // namespace app::classes::types
