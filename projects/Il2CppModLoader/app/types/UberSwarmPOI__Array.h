#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOI__Array {
        namespace {
            app::UberSwarmPOI__Array__Class* type_info_ref = nullptr;
        }
        app::UberSwarmPOI__Array__Class** type_info = &type_info_ref;
        inline app::UberSwarmPOI__Array__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOI__Array__Class>(type_info, "", "UberSwarmPOI[]");
        }
        inline app::UberSwarmPOI__Array* create() {
            return il2cpp::create_object<app::UberSwarmPOI__Array>(get_class());
        }
    } // namespace UberSwarmPOI__Array
} // namespace app::classes::types
