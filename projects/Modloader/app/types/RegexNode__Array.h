#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegexNode__Array__Class.h>
#include <Modloader/app/structs/RegexNode__Array.h>

namespace app::classes::types {
    namespace RegexNode__Array {
        namespace {
            inline app::RegexNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::RegexNode__Array__Class** type_info = &type_info_ref;
        inline app::RegexNode__Array__Class* get_class() {
            return il2cpp::get_class<app::RegexNode__Array__Class>(type_info, "System.Text.RegularExpressions", "RegexNode[]");
        }
        inline app::RegexNode__Array* create() {
            return il2cpp::create_object<app::RegexNode__Array>(get_class());
        }
    } // namespace RegexNode__Array
} // namespace app::classes::types
