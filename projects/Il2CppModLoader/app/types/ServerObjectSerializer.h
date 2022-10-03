#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObjectSerializer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerObjectSerializer__Class** type_info;
        inline app::ServerObjectSerializer__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectSerializer__Class>(type_info, "", "ServerObjectSerializer");
        }
        inline app::ServerObjectSerializer* create() {
            return il2cpp::create_object<app::ServerObjectSerializer>(get_class());
        }
    } // namespace ServerObjectSerializer
} // namespace app::classes::types
