#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tokenizer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Tokenizer__Class** type_info;
        inline app::Tokenizer__Class* get_class() {
            return il2cpp::get_class<app::Tokenizer__Class>(type_info, "System.Security.Util", "Tokenizer");
        }
        inline app::Tokenizer* create() {
            return il2cpp::create_object<app::Tokenizer>(get_class());
        }
    } // namespace Tokenizer
} // namespace app::classes::types
