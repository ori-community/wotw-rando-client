#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicTextProvider {
        namespace {
            inline app::DynamicTextProvider__Class* type_info_ref = nullptr;
        }
        inline app::DynamicTextProvider__Class** type_info = &type_info_ref;
        inline app::DynamicTextProvider__Class* get_class() {
            return il2cpp::get_class<app::DynamicTextProvider__Class>(type_info, "", "DynamicTextProvider");
        }
        inline app::DynamicTextProvider* create() {
            return il2cpp::create_object<app::DynamicTextProvider>(get_class());
        }
    } // namespace DynamicTextProvider
} // namespace app::classes::types
