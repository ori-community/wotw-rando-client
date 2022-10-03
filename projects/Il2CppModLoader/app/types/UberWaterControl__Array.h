#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl__Array {
        namespace {
            app::UberWaterControl__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterControl__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterControl__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterControl__Array__Class>(type_info, "", "UberWaterControl[]");
        }
        inline app::UberWaterControl__Array* create() {
            return il2cpp::create_object<app::UberWaterControl__Array>(get_class());
        }
    } // namespace UberWaterControl__Array
} // namespace app::classes::types
