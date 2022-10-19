#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsReadOnlyAttribute {
        namespace {
            inline app::IsReadOnlyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IsReadOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::IsReadOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::IsReadOnlyAttribute__Class>(type_info, "System.Runtime.CompilerServices", "IsReadOnlyAttribute");
        }
        inline app::IsReadOnlyAttribute* create() {
            return il2cpp::create_object<app::IsReadOnlyAttribute>(get_class());
        }
    } // namespace IsReadOnlyAttribute
} // namespace app::classes::types
