#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalDefinition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalDefinition__Class** type_info;
        inline app::LocalDefinition__Class* get_class() {
            return il2cpp::get_class<app::LocalDefinition__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalDefinition");
        }
        inline app::LocalDefinition* create() {
            return il2cpp::create_object<app::LocalDefinition>(get_class());
        }
        inline app::LocalDefinition__Boxed* box(app::LocalDefinition value) {
            return il2cpp::box_value<app::LocalDefinition__Boxed>(get_class(), value);
        }
        inline app::LocalDefinition__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalDefinition__Array>(get_class(), size);
        }
    } // namespace LocalDefinition
} // namespace app::classes::types
