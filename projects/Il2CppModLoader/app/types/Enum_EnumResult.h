#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Enum_EnumResult {
        namespace {
            inline app::Enum_EnumResult__Class* type_info_ref = nullptr;
        }
        inline app::Enum_EnumResult__Class** type_info = &type_info_ref;
        inline app::Enum_EnumResult__Class* get_class() {
            return il2cpp::get_nested_class<app::Enum_EnumResult__Class>(type_info, "System", "Enum", "EnumResult");
        }
        inline app::Enum_EnumResult* create() {
            return il2cpp::create_object<app::Enum_EnumResult>(get_class());
        }
        inline app::Enum_EnumResult__Boxed* box(app::Enum_EnumResult value) {
            return il2cpp::box_value<app::Enum_EnumResult__Boxed>(get_class(), value);
        }
    } // namespace Enum_EnumResult
} // namespace app::classes::types
