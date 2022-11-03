#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NullValueHandling__Enum_1 {
        namespace {
            inline app::NullValueHandling__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::NullValueHandling__Enum_1__Class** type_info = &type_info_ref;
        inline app::NullValueHandling__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::NullValueHandling__Enum_1__Class>(type_info, "PlayFab.Json", "NullValueHandling");
        }
        inline app::NullValueHandling__Enum_1* create() {
            return il2cpp::create_object<app::NullValueHandling__Enum_1>(get_class());
        }
    } // namespace NullValueHandling__Enum_1
} // namespace app::classes::types
