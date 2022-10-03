#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationIgnoreAttribute {
        namespace {
            app::DynamicInstantiationIgnoreAttribute__Class* type_info_ref = nullptr;
        }
        app::DynamicInstantiationIgnoreAttribute__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationIgnoreAttribute__Class>(type_info, "", "DynamicInstantiationIgnoreAttribute");
        }
        inline app::DynamicInstantiationIgnoreAttribute* create() {
            return il2cpp::create_object<app::DynamicInstantiationIgnoreAttribute>(get_class());
        }
    } // namespace DynamicInstantiationIgnoreAttribute
} // namespace app::classes::types
