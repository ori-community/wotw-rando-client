#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Module__Array {
        namespace {
            app::Module__Array__Class* type_info_ref = nullptr;
        }
        app::Module__Array__Class** type_info = &type_info_ref;
        inline app::Module__Array__Class* get_class() {
            return il2cpp::get_class<app::Module__Array__Class>(type_info, "System.Reflection", "Module[]");
        }
        inline app::Module__Array* create() {
            return il2cpp::create_object<app::Module__Array>(get_class());
        }
    } // namespace Module__Array
} // namespace app::classes::types
