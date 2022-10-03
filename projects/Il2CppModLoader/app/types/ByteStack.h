#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ByteStack {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ByteStack__Class** type_info;
        inline app::ByteStack__Class* get_class() {
            return il2cpp::get_class<app::ByteStack__Class>(type_info, "System.Xml", "ByteStack");
        }
        inline app::ByteStack* create() {
            return il2cpp::create_object<app::ByteStack>(get_class());
        }
    } // namespace ByteStack
} // namespace app::classes::types
