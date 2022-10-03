#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformSkipAction {
        namespace {
            app::PerformSkipAction__Class* type_info_ref = nullptr;
        }
        app::PerformSkipAction__Class** type_info = &type_info_ref;
        inline app::PerformSkipAction__Class* get_class() {
            return il2cpp::get_class<app::PerformSkipAction__Class>(type_info, "", "PerformSkipAction");
        }
        inline app::PerformSkipAction* create() {
            return il2cpp::create_object<app::PerformSkipAction>(get_class());
        }
    } // namespace PerformSkipAction
} // namespace app::classes::types
