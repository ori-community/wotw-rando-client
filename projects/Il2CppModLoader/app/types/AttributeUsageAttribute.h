#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeUsageAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeUsageAttribute__Class** type_info;
        inline app::AttributeUsageAttribute__Class* get_class() {
            return il2cpp::get_class<app::AttributeUsageAttribute__Class>(type_info, "System", "AttributeUsageAttribute");
        }
        inline app::AttributeUsageAttribute* create() {
            return il2cpp::create_object<app::AttributeUsageAttribute>(get_class());
        }
        inline app::AttributeUsageAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::AttributeUsageAttribute__Array>(get_class(), size);
        }
    } // namespace AttributeUsageAttribute
} // namespace app::classes::types
