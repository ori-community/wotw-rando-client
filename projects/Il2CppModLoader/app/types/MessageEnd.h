#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageEnd {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MessageEnd__Class** type_info;
        inline app::MessageEnd__Class* get_class() {
            return il2cpp::get_class<app::MessageEnd__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
        }
        inline app::MessageEnd* create() {
            return il2cpp::create_object<app::MessageEnd>(get_class());
        }
    } // namespace MessageEnd
} // namespace app::classes::types
