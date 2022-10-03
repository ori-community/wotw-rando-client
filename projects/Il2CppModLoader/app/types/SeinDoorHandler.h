#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinDoorHandler {
        namespace {
            app::SeinDoorHandler__Class* type_info_ref = nullptr;
        }
        app::SeinDoorHandler__Class** type_info = &type_info_ref;
        inline app::SeinDoorHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinDoorHandler__Class>(type_info, "", "SeinDoorHandler");
        }
        inline app::SeinDoorHandler* create() {
            return il2cpp::create_object<app::SeinDoorHandler>(get_class());
        }
    } // namespace SeinDoorHandler
} // namespace app::classes::types
