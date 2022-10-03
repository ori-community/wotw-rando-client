#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmPOI {
        namespace {
            app::UberSwarmPOI__Class* type_info_ref = nullptr;
        }
        app::UberSwarmPOI__Class** type_info = &type_info_ref;
        inline app::UberSwarmPOI__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmPOI__Class>(type_info, "", "UberSwarmPOI");
        }
        inline app::UberSwarmPOI* create() {
            return il2cpp::create_object<app::UberSwarmPOI>(get_class());
        }
        inline app::UberSwarmPOI__Array* create_array(int size) {
            return il2cpp::array_new<app::UberSwarmPOI__Array>(get_class(), size);
        }
    } // namespace UberSwarmPOI
} // namespace app::classes::types
