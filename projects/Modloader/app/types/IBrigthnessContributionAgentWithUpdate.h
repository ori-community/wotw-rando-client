#pragma once
#include <Modloader/app/structs/IBrigthnessContributionAgentWithUpdate.h>
#include <Modloader/app/structs/IBrigthnessContributionAgentWithUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgentWithUpdate {
        inline app::IBrigthnessContributionAgentWithUpdate__Class** type_info() {
            static app::IBrigthnessContributionAgentWithUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBrigthnessContributionAgentWithUpdate__Class**)(modloader::win::memory::resolve_rva(0x0477E980));
            }
            return cache;
        }
        inline app::IBrigthnessContributionAgentWithUpdate__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgentWithUpdate__Class>(type_info(), "", "IBrigthnessContributionAgentWithUpdate");
        }
    } // namespace IBrigthnessContributionAgentWithUpdate
} // namespace app::classes::types
