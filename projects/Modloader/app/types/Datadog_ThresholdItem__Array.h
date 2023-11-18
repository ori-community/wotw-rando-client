#pragma once
#include <Modloader/app/structs/Datadog_ThresholdItem__Array.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datadog_ThresholdItem__Array {
        inline app::Datadog_ThresholdItem__Array__Class** type_info() {
            static app::Datadog_ThresholdItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Datadog_ThresholdItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Datadog_ThresholdItem__Array__Class* get_class() {
            return il2cpp::get_class<app::Datadog_ThresholdItem__Array__Class>(type_info(), "", "Datadog+ThresholdItem[]");
        }
        inline app::Datadog_ThresholdItem__Array* create() {
            return il2cpp::create_object<app::Datadog_ThresholdItem__Array>(get_class());
        }
    } // namespace Datadog_ThresholdItem__Array
} // namespace app::classes::types
