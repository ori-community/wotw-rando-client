#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationAttribute {
        namespace {
            app::DynamicInstantiationAttribute__Class* type_info_ref = nullptr;
        }
        app::DynamicInstantiationAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationAttribute__Class>(type_info, "", "DynamicInstantiationAttribute");
        }
        inline app::DynamicInstantiationAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationAttribute>(get_class());
        }
    } // namespace DynamicInstantiationAttribute
} // namespace app::classes::types
