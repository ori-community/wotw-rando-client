#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPage__Array {
        namespace {
            app::IDebugMenuPage__Array__Class* type_info_ref = nullptr;
        }
        app::IDebugMenuPage__Array__Class** type_info = &type_info_ref;
        inline app::IDebugMenuPage__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPage__Array__Class>(type_info, "", "IDebugMenuPage[]");
        }
        inline app::IDebugMenuPage__Array* create() {
            return il2cpp::create_object<app::IDebugMenuPage__Array>(get_class());
        }
    } // namespace IDebugMenuPage__Array
} // namespace app::classes::types
