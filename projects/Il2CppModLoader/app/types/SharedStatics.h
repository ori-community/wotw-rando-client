#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SharedStatics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SharedStatics__Class** type_info;
        inline app::SharedStatics__Class* get_class() {
            return il2cpp::get_class<app::SharedStatics__Class>(type_info, "System", "SharedStatics");
        }
        inline app::SharedStatics* create() {
            return il2cpp::create_object<app::SharedStatics>(get_class());
        }
    } // namespace SharedStatics
} // namespace app::classes::types
