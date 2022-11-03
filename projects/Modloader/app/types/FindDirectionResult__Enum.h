#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FindDirectionResult__Enum {
        namespace {
            inline app::FindDirectionResult__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FindDirectionResult__Enum__Class** type_info = &type_info_ref;
        inline app::FindDirectionResult__Enum__Class* get_class() {
            return il2cpp::get_class<app::FindDirectionResult__Enum__Class>(type_info, "TriangleNet", "FindDirectionResult");
        }
        inline app::FindDirectionResult__Enum* create() {
            return il2cpp::create_object<app::FindDirectionResult__Enum>(get_class());
        }
    } // namespace FindDirectionResult__Enum
} // namespace app::classes::types
