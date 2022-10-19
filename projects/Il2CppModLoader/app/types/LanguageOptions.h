#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LanguageOptions {
        namespace {
            inline app::LanguageOptions__Class* type_info_ref = nullptr;
        }
        inline app::LanguageOptions__Class** type_info = &type_info_ref;
        inline app::LanguageOptions__Class* get_class() {
            return il2cpp::get_class<app::LanguageOptions__Class>(type_info, "", "LanguageOptions");
        }
        inline app::LanguageOptions* create() {
            return il2cpp::create_object<app::LanguageOptions>(get_class());
        }
    } // namespace LanguageOptions
} // namespace app::classes::types
