#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderProperty_Vector__Enum {
        namespace {
            app::UberShaderProperty_Vector__Enum__Class* type_info_ref = nullptr;
        }
        app::UberShaderProperty_Vector__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderProperty_Vector__Enum__Class* get_class() {
            return il2cpp::get_class<app::UberShaderProperty_Vector__Enum__Class>(type_info, "", "UberShaderProperty_Vector");
        }
        inline app::UberShaderProperty_Vector__Enum* create() {
            return il2cpp::create_object<app::UberShaderProperty_Vector__Enum>(get_class());
        }
        inline app::UberShaderProperty_Vector__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UberShaderProperty_Vector__Enum__Array>(get_class(), size);
        }
        inline app::UberShaderProperty_Vector__Enum__Array* create_array(const std::vector<app::UberShaderProperty_Vector__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::UberShaderProperty_Vector__Enum__Array>(get_class(), items);
        }
    } // namespace UberShaderProperty_Vector__Enum
} // namespace app::classes::types
