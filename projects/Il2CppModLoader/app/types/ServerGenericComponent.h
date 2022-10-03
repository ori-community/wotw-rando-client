#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerGenericComponent {
        namespace {
            app::ServerGenericComponent__Class* type_info_ref = nullptr;
        }
        app::ServerGenericComponent__Class** type_info = &type_info_ref;
        inline app::ServerGenericComponent__Class* get_class() {
            return il2cpp::get_class<app::ServerGenericComponent__Class>(type_info, "", "ServerGenericComponent");
        }
        inline app::ServerGenericComponent* create() {
            return il2cpp::create_object<app::ServerGenericComponent>(get_class());
        }
    } // namespace ServerGenericComponent
} // namespace app::classes::types
