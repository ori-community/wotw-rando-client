#pragma once
#include <Modloader/app/structs/Datadog_ThresholdItem.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Array.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Boxed.h>
#include <Modloader/app/structs/Datadog_ThresholdItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datadog_ThresholdItem {
        inline app::Datadog_ThresholdItem__Class** type_info() {
            static app::Datadog_ThresholdItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datadog_ThresholdItem__Class**)(modloader::win::memory::resolve_rva(0x04769EB0));
            }
            return cache;
        }
        inline app::Datadog_ThresholdItem__Class* get_class() {
            return il2cpp::get_nested_class<app::Datadog_ThresholdItem__Class>(type_info(), "", "Datadog", "ThresholdItem");
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
        inline app::Datadog_ThresholdItem__Array* create_array(const std::vector<app::Datadog_ThresholdItem>& items) {
            return il2cpp::array_new<app::Datadog_ThresholdItem__Array>(get_class(), items);
        }
    } // namespace Datadog_ThresholdItem
} // namespace app::classes::types
