#pragma once
#include <Modloader/app/structs/FindDirectionResult__Enum.h>
#include <Modloader/app/structs/FindDirectionResult__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FindDirectionResult__Enum {
        inline app::FindDirectionResult__Enum__Class** type_info() {
            static app::FindDirectionResult__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FindDirectionResult__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FindDirectionResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::FindDirectionResult__Enum__Class>(type_info(), "TriangleNet", "FindDirectionResult");
        }
        inline app::FindDirectionResult__Enum* create() {
            return il2cpp::create_object<app::FindDirectionResult__Enum>(get_class());
        }
    } // namespace FindDirectionResult__Enum
} // namespace app::classes::types
