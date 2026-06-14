#pragma once
#include <Modloader/app/structs/IBrigthnessContributionAgent__Array.h>
#include <Modloader/app/structs/IBrigthnessContributionAgent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgent__Array {
        inline app::IBrigthnessContributionAgent__Array__Class** type_info() {
            static app::IBrigthnessContributionAgent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IBrigthnessContributionAgent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IBrigthnessContributionAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgent__Array__Class>(type_info(), "", "IBrigthnessContributionAgent[]");
        }
        inline app::IBrigthnessContributionAgent__Array* create() {
            return il2cpp::create_object<app::IBrigthnessContributionAgent__Array>(get_class());
        }
    } // namespace IBrigthnessContributionAgent__Array
} // namespace app::classes::types
