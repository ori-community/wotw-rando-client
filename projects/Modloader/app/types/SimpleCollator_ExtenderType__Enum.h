#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleCollator_ExtenderType__Enum {
        namespace {
            inline app::SimpleCollator_ExtenderType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SimpleCollator_ExtenderType__Enum__Class** type_info = &type_info_ref;
        inline app::SimpleCollator_ExtenderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SimpleCollator_ExtenderType__Enum__Class>(type_info, "Mono.Globalization.Unicode", "SimpleCollator", "ExtenderType");
        }
        inline app::SimpleCollator_ExtenderType__Enum* create() {
            return il2cpp::create_object<app::SimpleCollator_ExtenderType__Enum>(get_class());
        }
    } // namespace SimpleCollator_ExtenderType__Enum
} // namespace app::classes::types
