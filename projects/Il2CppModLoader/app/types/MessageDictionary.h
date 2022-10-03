#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageDictionary__Class** type_info;
        inline app::MessageDictionary__Class* get_class() {
            return il2cpp::get_class<app::MessageDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "MessageDictionary");
        }
        inline app::MessageDictionary* create() {
            return il2cpp::create_object<app::MessageDictionary>(get_class());
        }
    } // namespace MessageDictionary
} // namespace app::classes::types
