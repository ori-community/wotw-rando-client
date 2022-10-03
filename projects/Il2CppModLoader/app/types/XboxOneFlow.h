#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneFlow {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneFlow__Class** type_info;
        inline app::XboxOneFlow__Class* get_class() {
            return il2cpp::get_class<app::XboxOneFlow__Class>(type_info, "", "XboxOneFlow");
        }
        inline app::XboxOneFlow* create() {
            return il2cpp::create_object<app::XboxOneFlow>(get_class());
        }
    } // namespace XboxOneFlow
} // namespace app::classes::types
