#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MetricUnit__Enum {
        namespace {
            inline app::MetricUnit__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MetricUnit__Enum__Class** type_info = &type_info_ref;
        inline app::MetricUnit__Enum__Class* get_class() {
            return il2cpp::get_class<app::MetricUnit__Enum__Class>(type_info, "PlayFab.PlayStreamModels", "MetricUnit");
        }
        inline app::MetricUnit__Enum* create() {
            return il2cpp::create_object<app::MetricUnit__Enum>(get_class());
        }
    } // namespace MetricUnit__Enum
} // namespace app::classes::types
