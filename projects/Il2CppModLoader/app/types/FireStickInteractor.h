#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireStickInteractor {
        namespace {
            app::FireStickInteractor__Class* type_info_ref = nullptr;
        }
        app::FireStickInteractor__Class** type_info = &type_info_ref;
        inline app::FireStickInteractor__Class* get_class() {
            return il2cpp::get_class<app::FireStickInteractor__Class>(type_info, "", "FireStickInteractor");
        }
        inline app::FireStickInteractor* create() {
            return il2cpp::create_object<app::FireStickInteractor>(get_class());
        }
    } // namespace FireStickInteractor
} // namespace app::classes::types
