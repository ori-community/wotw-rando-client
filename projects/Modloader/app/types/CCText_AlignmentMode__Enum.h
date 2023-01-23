#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCText_AlignmentMode__Enum__Class.h>
#include <Modloader/app/structs/CCText_AlignmentMode__Enum.h>

namespace app::classes::types {
    namespace CCText_AlignmentMode__Enum {
        namespace {
            inline app::CCText_AlignmentMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CCText_AlignmentMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCText_AlignmentMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCText_AlignmentMode__Enum__Class>(type_info, "", "CCText", "AlignmentMode");
        }
        inline app::CCText_AlignmentMode__Enum* create() {
            return il2cpp::create_object<app::CCText_AlignmentMode__Enum>(get_class());
        }
    } // namespace CCText_AlignmentMode__Enum
} // namespace app::classes::types
