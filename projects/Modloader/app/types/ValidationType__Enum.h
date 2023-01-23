#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValidationType__Enum__Class.h>
#include <Modloader/app/structs/ValidationType__Enum.h>

namespace app::classes::types {
    namespace ValidationType__Enum {
        namespace {
            inline app::ValidationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ValidationType__Enum__Class** type_info = &type_info_ref;
        inline app::ValidationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValidationType__Enum__Class>(type_info, "System.Xml", "ValidationType");
        }
        inline app::ValidationType__Enum* create() {
            return il2cpp::create_object<app::ValidationType__Enum>(get_class());
        }
    } // namespace ValidationType__Enum
} // namespace app::classes::types
