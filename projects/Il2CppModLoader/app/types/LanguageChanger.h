#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LanguageChanger {
        namespace {
            app::LanguageChanger__Class* type_info_ref = nullptr;
        }
        app::LanguageChanger__Class** type_info = &type_info_ref;
        inline app::LanguageChanger__Class* get_class() {
            return il2cpp::get_class<app::LanguageChanger__Class>(type_info, "", "LanguageChanger");
        }
        inline app::LanguageChanger* create() {
            return il2cpp::create_object<app::LanguageChanger>(get_class());
        }
    } // namespace LanguageChanger
} // namespace app::classes::types
