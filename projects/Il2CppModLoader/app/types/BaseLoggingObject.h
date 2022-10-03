#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseLoggingObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BaseLoggingObject__Class** type_info;
        inline app::BaseLoggingObject__Class* get_class() {
            return il2cpp::get_class<app::BaseLoggingObject__Class>(type_info, "System.Net", "BaseLoggingObject");
        }
        inline app::BaseLoggingObject* create() {
            return il2cpp::create_object<app::BaseLoggingObject>(get_class());
        }
    } // namespace BaseLoggingObject
} // namespace app::classes::types
