#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgentWithUpdate {
        inline app::IBrigthnessContributionAgentWithUpdate__Class** type_info = (app::IBrigthnessContributionAgentWithUpdate__Class**)(modloader::win::memory::resolve_rva(0x0477E980));
        inline app::IBrigthnessContributionAgentWithUpdate__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgentWithUpdate__Class>(type_info, "", "IBrigthnessContributionAgentWithUpdate");
        }
    } // namespace IBrigthnessContributionAgentWithUpdate
} // namespace app::classes::types
