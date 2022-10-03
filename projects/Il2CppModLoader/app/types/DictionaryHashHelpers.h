#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DictionaryHashHelpers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DictionaryHashHelpers__Class** type_info;
        inline app::DictionaryHashHelpers__Class* get_class() {
            return il2cpp::get_class<app::DictionaryHashHelpers__Class>(type_info, "System.Collections.Generic", "DictionaryHashHelpers");
        }
        inline app::DictionaryHashHelpers* create() {
            return il2cpp::create_object<app::DictionaryHashHelpers>(get_class());
        }
    } // namespace DictionaryHashHelpers
} // namespace app::classes::types
