#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datadog_ThresholdItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datadog_ThresholdItem__Class** type_info;
        inline app::Datadog_ThresholdItem__Class* get_class() {
            return il2cpp::get_nested_class<app::Datadog_ThresholdItem__Class>(type_info, "", "Datadog", "ThresholdItem");
        }
        inline app::Datadog_ThresholdItem* create() {
            return il2cpp::create_object<app::Datadog_ThresholdItem>(get_class());
        }
        inline app::Datadog_ThresholdItem__Boxed* box(app::Datadog_ThresholdItem value) {
            return il2cpp::box_value<app::Datadog_ThresholdItem__Boxed>(get_class(), value);
        }
        inline app::Datadog_ThresholdItem__Array* create_array(int size) {
            return il2cpp::array_new<app::Datadog_ThresholdItem__Array>(get_class(), size);
        }
    } // namespace Datadog_ThresholdItem
} // namespace app::classes::types
