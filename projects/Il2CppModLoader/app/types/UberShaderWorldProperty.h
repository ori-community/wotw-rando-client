#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldProperty {
        namespace {
            app::UberShaderWorldProperty__Class* type_info_ref = nullptr;
        }
        app::UberShaderWorldProperty__Class** type_info = &type_info_ref;
        inline app::UberShaderWorldProperty__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldProperty__Class>(type_info, "", "UberShaderWorldProperty");
        }
        inline app::UberShaderWorldProperty* create() {
            return il2cpp::create_object<app::UberShaderWorldProperty>(get_class());
        }
        inline app::UberShaderWorldProperty__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderWorldProperty__Array>(get_class(), size);
        }
        inline app::UberShaderWorldProperty__Array* create_array(const std::vector<app::UberShaderWorldProperty*>& items) {
            return il2cpp::array_new<app::UberShaderWorldProperty__Array>(get_class(), items);
        }
    } // namespace UberShaderWorldProperty
} // namespace app::classes::types
