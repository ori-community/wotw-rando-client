#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaskedTextProvider_CaseConversion__Enum {
        inline app::MaskedTextProvider_CaseConversion__Enum__Class** type_info = (app::MaskedTextProvider_CaseConversion__Enum__Class**)(modloader::win::memory::resolve_rva(0x04707FB0));
        inline app::MaskedTextProvider_CaseConversion__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MaskedTextProvider_CaseConversion__Enum__Class>(type_info, "System.ComponentModel", "MaskedTextProvider", "CaseConversion");
        }
        inline app::MaskedTextProvider_CaseConversion__Enum* create() {
            return il2cpp::create_object<app::MaskedTextProvider_CaseConversion__Enum>(get_class());
        }
    } // namespace MaskedTextProvider_CaseConversion__Enum
} // namespace app::classes::types
