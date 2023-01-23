#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Trail_TrailMode__Enum__Class.h>
#include <Modloader/app/structs/Trail_TrailMode__Enum.h>

namespace app::classes::types {
    namespace Trail_TrailMode__Enum {
        namespace {
            inline app::Trail_TrailMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Trail_TrailMode__Enum__Class** type_info = &type_info_ref;
        inline app::Trail_TrailMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Trail_TrailMode__Enum__Class>(type_info, "Moon", "Trail", "TrailMode");
        }
        inline app::Trail_TrailMode__Enum* create() {
            return il2cpp::create_object<app::Trail_TrailMode__Enum>(get_class());
        }
    } // namespace Trail_TrailMode__Enum
} // namespace app::classes::types
