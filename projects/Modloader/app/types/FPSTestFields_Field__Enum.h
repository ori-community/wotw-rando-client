#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FPSTestFields_Field__Enum__Class.h>
#include <Modloader/app/structs/FPSTestFields_Field__Enum.h>

namespace app::classes::types {
    namespace FPSTestFields_Field__Enum {
        namespace {
            inline app::FPSTestFields_Field__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FPSTestFields_Field__Enum__Class** type_info = &type_info_ref;
        inline app::FPSTestFields_Field__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSTestFields_Field__Enum__Class>(type_info, "", "FPSTestFields", "Field");
        }
        inline app::FPSTestFields_Field__Enum* create() {
            return il2cpp::create_object<app::FPSTestFields_Field__Enum>(get_class());
        }
    } // namespace FPSTestFields_Field__Enum
} // namespace app::classes::types
