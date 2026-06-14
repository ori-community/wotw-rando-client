#pragma once
#include <Modloader/app/structs/Guid_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/Guid_ParseFailureKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Guid_ParseFailureKind__Enum {
        inline app::Guid_ParseFailureKind__Enum__Class** type_info() {
            static app::Guid_ParseFailureKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Guid_ParseFailureKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Guid_ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Guid_ParseFailureKind__Enum__Class>(type_info(), "System", "Guid", "ParseFailureKind");
        }
        inline app::Guid_ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::Guid_ParseFailureKind__Enum>(get_class());
        }
    } // namespace Guid_ParseFailureKind__Enum
} // namespace app::classes::types
