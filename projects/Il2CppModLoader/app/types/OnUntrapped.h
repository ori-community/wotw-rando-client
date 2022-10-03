#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnUntrapped {
        namespace {
            app::OnUntrapped__Class* type_info_ref = nullptr;
        }
        app::OnUntrapped__Class** type_info = &type_info_ref;
        inline app::OnUntrapped__Class* get_class() {
            return il2cpp::get_class<app::OnUntrapped__Class>(type_info, "fsm.triggers", "OnUntrapped");
        }
        inline app::OnUntrapped* create() {
            return il2cpp::create_object<app::OnUntrapped>(get_class());
        }
    } // namespace OnUntrapped
} // namespace app::classes::types
