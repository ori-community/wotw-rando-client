#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteOnlyAttribute {
        namespace {
            inline app::WriteOnlyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::WriteOnlyAttribute__Class** type_info = &type_info_ref;
        inline app::WriteOnlyAttribute__Class* get_class() {
            return il2cpp::get_class<app::WriteOnlyAttribute__Class>(type_info, "Unity.Collections", "WriteOnlyAttribute");
        }
        inline app::WriteOnlyAttribute* create() {
            return il2cpp::create_object<app::WriteOnlyAttribute>(get_class());
        }
    } // namespace WriteOnlyAttribute
} // namespace app::classes::types
