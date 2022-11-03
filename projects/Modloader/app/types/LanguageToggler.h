#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LanguageToggler {
        namespace {
            inline app::LanguageToggler__Class* type_info_ref = nullptr;
        }
        inline app::LanguageToggler__Class** type_info = &type_info_ref;
        inline app::LanguageToggler__Class* get_class() {
            return il2cpp::get_class<app::LanguageToggler__Class>(type_info, "", "LanguageToggler");
        }
        inline app::LanguageToggler* create() {
            return il2cpp::create_object<app::LanguageToggler>(get_class());
        }
    } // namespace LanguageToggler
} // namespace app::classes::types
