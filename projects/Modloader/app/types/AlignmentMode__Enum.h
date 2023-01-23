#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AlignmentMode__Enum__Class.h>
#include <Modloader/app/structs/AlignmentMode__Enum.h>

namespace app::classes::types {
    namespace AlignmentMode__Enum {
        namespace {
            inline app::AlignmentMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AlignmentMode__Enum__Class** type_info = &type_info_ref;
        inline app::AlignmentMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AlignmentMode__Enum__Class>(type_info, "CatlikeCoding.TextBox", "AlignmentMode");
        }
        inline app::AlignmentMode__Enum* create() {
            return il2cpp::create_object<app::AlignmentMode__Enum>(get_class());
        }
    } // namespace AlignmentMode__Enum
} // namespace app::classes::types
