#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangesStatus__Enum {
        namespace {
            inline app::ChangesStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChangesStatus__Enum__Class** type_info = &type_info_ref;
        inline app::ChangesStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::ChangesStatus__Enum__Class>(type_info, "Moon.ReviewFramework", "ChangesStatus");
        }
        inline app::ChangesStatus__Enum* create() {
            return il2cpp::create_object<app::ChangesStatus__Enum>(get_class());
        }
    } // namespace ChangesStatus__Enum
} // namespace app::classes::types
