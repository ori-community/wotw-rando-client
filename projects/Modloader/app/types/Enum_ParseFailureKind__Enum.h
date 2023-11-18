#pragma once
#include <Modloader/app/structs/Enum_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/Enum_ParseFailureKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enum_ParseFailureKind__Enum {
        inline app::Enum_ParseFailureKind__Enum__Class** type_info() {
            static app::Enum_ParseFailureKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Enum_ParseFailureKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Enum_ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Enum_ParseFailureKind__Enum__Class>(type_info(), "System", "Enum", "ParseFailureKind");
        }
        inline app::Enum_ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::Enum_ParseFailureKind__Enum>(get_class());
        }
    } // namespace Enum_ParseFailureKind__Enum
} // namespace app::classes::types
