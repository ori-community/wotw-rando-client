#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgent__Array {
        namespace {
            inline app::IBrigthnessContributionAgent__Array__Class* type_info_ref = nullptr;
        }
        inline app::IBrigthnessContributionAgent__Array__Class** type_info = &type_info_ref;
        inline app::IBrigthnessContributionAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgent__Array__Class>(type_info, "", "IBrigthnessContributionAgent[]");
        }
        inline app::IBrigthnessContributionAgent__Array* create() {
            return il2cpp::create_object<app::IBrigthnessContributionAgent__Array>(get_class());
        }
    } // namespace IBrigthnessContributionAgent__Array
} // namespace app::classes::types
