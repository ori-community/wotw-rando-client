#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegexOptions__Enum__Array__Class.h>
#include <Modloader/app/structs/RegexOptions__Enum__Array.h>

namespace app::classes::types {
    namespace RegexOptions__Enum__Array {
        namespace {
            inline app::RegexOptions__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::RegexOptions__Enum__Array__Class** type_info = &type_info_ref;
        inline app::RegexOptions__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexOptions__Enum__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexOptions[]");
        }
        inline app::RegexOptions__Enum__Array* create() {
            return il2cpp::create_object<app::RegexOptions__Enum__Array>(get_class());
        }
    } // namespace RegexOptions__Enum__Array
} // namespace app::classes::types
