#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UsedImplicitlyAttribute {
        namespace {
            inline app::UsedImplicitlyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UsedImplicitlyAttribute__Class** type_info = &type_info_ref;
        inline app::UsedImplicitlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::UsedImplicitlyAttribute__Class>(type_info, "JetBrains.Annotations", "UsedImplicitlyAttribute");
        }
        inline app::UsedImplicitlyAttribute* create() {
            return il2cpp::create_object<app::UsedImplicitlyAttribute>(get_class());
        }
    } // namespace UsedImplicitlyAttribute
} // namespace app::classes::types
