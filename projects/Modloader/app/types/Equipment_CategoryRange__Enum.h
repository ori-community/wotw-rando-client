#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Equipment_CategoryRange__Enum {
        namespace {
            inline app::Equipment_CategoryRange__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Equipment_CategoryRange__Enum__Class** type_info = &type_info_ref;
        inline app::Equipment_CategoryRange__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Equipment_CategoryRange__Enum__Class>(type_info, "", "Equipment", "CategoryRange");
        }
        inline app::Equipment_CategoryRange__Enum* create() {
            return il2cpp::create_object<app::Equipment_CategoryRange__Enum>(get_class());
        }
    } // namespace Equipment_CategoryRange__Enum
} // namespace app::classes::types
