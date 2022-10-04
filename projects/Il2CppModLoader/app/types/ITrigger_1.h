#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrigger_1 {
        namespace {
            app::ITrigger_1__Class* type_info_ref = nullptr;
        }
        app::ITrigger_1__Class** type_info = &type_info_ref;
        inline app::ITrigger_1__Class* get_class() {
            return il2cpp::get_class<app::ITrigger_1__Class>(type_info, "fsm", "ITrigger");
        }
        inline app::ITrigger_1* create() {
            return il2cpp::create_object<app::ITrigger_1>(get_class());
        }
    } // namespace ITrigger_1
} // namespace app::classes::types
