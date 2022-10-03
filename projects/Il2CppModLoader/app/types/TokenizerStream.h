#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokenizerStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TokenizerStream__Class** type_info;
        inline app::TokenizerStream__Class* get_class() {
            return il2cpp::get_class<app::TokenizerStream__Class>(type_info, "System.Security.Util", "TokenizerStream");
        }
        inline app::TokenizerStream* create() {
            return il2cpp::create_object<app::TokenizerStream>(get_class());
        }
    } // namespace TokenizerStream
} // namespace app::classes::types
