#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidatorState__Enum {
        namespace {
            inline app::ValidatorState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ValidatorState__Enum__Class** type_info = &type_info_ref;
        inline app::ValidatorState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValidatorState__Enum__Class>(type_info, "System.Xml.Schema", "ValidatorState");
        }
        inline app::ValidatorState__Enum* create() {
            return il2cpp::create_object<app::ValidatorState__Enum>(get_class());
        }
    } // namespace ValidatorState__Enum
} // namespace app::classes::types
