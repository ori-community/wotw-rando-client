#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplicationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ApplicationException__Class** type_info;
        inline app::ApplicationException__Class* get_class() {
            return il2cpp::get_class<app::ApplicationException__Class>(type_info, "System", "ApplicationException");
        }
        inline app::ApplicationException* create() {
            return il2cpp::create_object<app::ApplicationException>(get_class());
        }
    } // namespace ApplicationException
} // namespace app::classes::types
