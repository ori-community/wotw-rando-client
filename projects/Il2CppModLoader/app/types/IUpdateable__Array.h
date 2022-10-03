#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IUpdateable__Array {
        namespace {
            app::IUpdateable__Array__Class* type_info_ref = nullptr;
        }
        app::IUpdateable__Array__Class** type_info = &type_info_ref;
        inline app::IUpdateable__Array__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable__Array__Class>(type_info, "SystemIntegration", "IUpdateable[]");
        }
        inline app::IUpdateable__Array* create() {
            return il2cpp::create_object<app::IUpdateable__Array>(get_class());
        }
    } // namespace IUpdateable__Array
} // namespace app::classes::types
