#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TranslatedMessageProvider__Class** type_info;
        inline app::TranslatedMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::TranslatedMessageProvider__Class>(type_info, "", "TranslatedMessageProvider");
        }
        inline app::TranslatedMessageProvider* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider>(get_class());
        }
    } // namespace TranslatedMessageProvider
} // namespace app::classes::types
