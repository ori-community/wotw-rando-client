#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Formatting__Enum_1 {
        namespace {
            inline app::Formatting__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::Formatting__Enum_1__Class** type_info = &type_info_ref;
        inline app::Formatting__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::Formatting__Enum_1__Class>(type_info, "Newtonsoft.Json", "Formatting");
        }
        inline app::Formatting__Enum_1* create() {
            return il2cpp::create_object<app::Formatting__Enum_1>(get_class());
        }
    } // namespace Formatting__Enum_1
} // namespace app::classes::types
