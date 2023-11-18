#pragma once
#include <Modloader/app/structs/MetricUnit__Enum.h>
#include <Modloader/app/structs/MetricUnit__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetricUnit__Enum {
        inline app::MetricUnit__Enum__Class** type_info() {
            static app::MetricUnit__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MetricUnit__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MetricUnit__Enum__Class* get_class() {
            return il2cpp::get_class<app::MetricUnit__Enum__Class>(type_info(), "PlayFab.PlayStreamModels", "MetricUnit");
        }
        inline app::MetricUnit__Enum* create() {
            return il2cpp::create_object<app::MetricUnit__Enum>(get_class());
        }
    } // namespace MetricUnit__Enum
} // namespace app::classes::types
