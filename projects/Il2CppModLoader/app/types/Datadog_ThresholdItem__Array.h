#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datadog_ThresholdItem__Array {
        namespace {
            app::Datadog_ThresholdItem__Array__Class* type_info_ref = nullptr;
        }
        app::Datadog_ThresholdItem__Array__Class** type_info = &type_info_ref;
        inline app::Datadog_ThresholdItem__Array__Class* get_class() {
            return il2cpp::get_class<app::Datadog_ThresholdItem__Array__Class>(type_info, "", "Datadog+ThresholdItem[]");
        }
        inline app::Datadog_ThresholdItem__Array* create() {
            return il2cpp::create_object<app::Datadog_ThresholdItem__Array>(get_class());
        }
    } // namespace Datadog_ThresholdItem__Array
} // namespace app::classes::types
