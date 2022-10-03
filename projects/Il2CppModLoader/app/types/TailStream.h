#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TailStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TailStream__Class** type_info;
        inline app::TailStream__Class* get_class() {
            return il2cpp::get_class<app::TailStream__Class>(type_info, "System.Security.Cryptography", "TailStream");
        }
        inline app::TailStream* create() {
            return il2cpp::create_object<app::TailStream>(get_class());
        }
    } // namespace TailStream
} // namespace app::classes::types
