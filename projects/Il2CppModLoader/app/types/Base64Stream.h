#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Base64Stream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Base64Stream__Class** type_info;
        inline app::Base64Stream__Class* get_class() {
            return il2cpp::get_class<app::Base64Stream__Class>(type_info, "System.Net", "Base64Stream");
        }
        inline app::Base64Stream* create() {
            return il2cpp::create_object<app::Base64Stream>(get_class());
        }
    } // namespace Base64Stream
} // namespace app::classes::types
