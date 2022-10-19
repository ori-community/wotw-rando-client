#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Guid_ParseFailureKind__Enum {
        namespace {
            inline app::Guid_ParseFailureKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Guid_ParseFailureKind__Enum__Class** type_info = &type_info_ref;
        inline app::Guid_ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Guid_ParseFailureKind__Enum__Class>(type_info, "System", "Guid", "ParseFailureKind");
        }
        inline app::Guid_ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::Guid_ParseFailureKind__Enum>(get_class());
        }
    } // namespace Guid_ParseFailureKind__Enum
} // namespace app::classes::types
