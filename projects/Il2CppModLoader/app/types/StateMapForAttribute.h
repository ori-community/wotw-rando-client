#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateMapForAttribute {
        namespace {
            app::StateMapForAttribute__Class* type_info_ref = nullptr;
        }
        app::StateMapForAttribute__Class** type_info = &type_info_ref;
        inline app::StateMapForAttribute__Class* get_class() {
            return il2cpp::get_class<app::StateMapForAttribute__Class>(type_info, "", "StateMapForAttribute");
        }
        inline app::StateMapForAttribute* create() {
            return il2cpp::create_object<app::StateMapForAttribute>(get_class());
        }
    } // namespace StateMapForAttribute
} // namespace app::classes::types
