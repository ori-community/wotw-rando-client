#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Trigger_1 {
        namespace {
            app::Trigger_1__Class* type_info_ref = nullptr;
        }
        app::Trigger_1__Class** type_info = &type_info_ref;
        inline app::Trigger_1__Class* get_class() {
            return il2cpp::get_class<app::Trigger_1__Class>(type_info, "", "Trigger");
        }
        inline app::Trigger_1* create() {
            return il2cpp::create_object<app::Trigger_1>(get_class());
        }
    } // namespace Trigger_1
} // namespace app::classes::types
