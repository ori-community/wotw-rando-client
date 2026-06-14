#pragma once
#include <Modloader/app/structs/Version_ParseFailureKind__Enum.h>
#include <Modloader/app/structs/Version_ParseFailureKind__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Version_ParseFailureKind__Enum {
        inline app::Version_ParseFailureKind__Enum__Class** type_info() {
            static app::Version_ParseFailureKind__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Version_ParseFailureKind__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Version_ParseFailureKind__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Version_ParseFailureKind__Enum__Class>(type_info(), "System", "Version", "ParseFailureKind");
        }
        inline app::Version_ParseFailureKind__Enum* create() {
            return il2cpp::create_object<app::Version_ParseFailureKind__Enum>(get_class());
        }
    } // namespace Version_ParseFailureKind__Enum
} // namespace app::classes::types
