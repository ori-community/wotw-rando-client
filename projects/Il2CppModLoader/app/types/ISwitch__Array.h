#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISwitch__Array {
        namespace {
            app::ISwitch__Array__Class* type_info_ref = nullptr;
        }
        app::ISwitch__Array__Class** type_info = &type_info_ref;
        inline app::ISwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::ISwitch__Array__Class>(type_info, "", "ISwitch[]");
        }
        inline app::ISwitch__Array* create() {
            return il2cpp::create_object<app::ISwitch__Array>(get_class());
        }
    } // namespace ISwitch__Array
} // namespace app::classes::types
