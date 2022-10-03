#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Elevator {
        namespace {
            app::Elevator__Class* type_info_ref = nullptr;
        }
        app::Elevator__Class** type_info = &type_info_ref;
        inline app::Elevator__Class* get_class() {
            return il2cpp::get_class<app::Elevator__Class>(type_info, "", "Elevator");
        }
        inline app::Elevator* create() {
            return il2cpp::create_object<app::Elevator>(get_class());
        }
    } // namespace Elevator
} // namespace app::classes::types
