#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuTabBackground__Enum {
        namespace {
            inline app::MenuTabBackground__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MenuTabBackground__Enum__Class** type_info = &type_info_ref;
        inline app::MenuTabBackground__Enum__Class* get_class() {
            return il2cpp::get_class<app::MenuTabBackground__Enum__Class>(type_info, "", "MenuTabBackground");
        }
        inline app::MenuTabBackground__Enum* create() {
            return il2cpp::create_object<app::MenuTabBackground__Enum>(get_class());
        }
    } // namespace MenuTabBackground__Enum
} // namespace app::classes::types
