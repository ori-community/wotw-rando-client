#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandPoser {
        namespace {
            app::HandPoser__Class* type_info_ref = nullptr;
        }
        app::HandPoser__Class** type_info = &type_info_ref;
        inline app::HandPoser__Class* get_class() {
            return il2cpp::get_class<app::HandPoser__Class>(type_info, "RootMotion.FinalIK", "HandPoser");
        }
        inline app::HandPoser* create() {
            return il2cpp::create_object<app::HandPoser>(get_class());
        }
    } // namespace HandPoser
} // namespace app::classes::types
