#pragma once
#include <Modloader/app/structs/IBrigthnessContributionAgent.h>
#include <Modloader/app/structs/IBrigthnessContributionAgent__Array.h>
#include <Modloader/app/structs/IBrigthnessContributionAgent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBrigthnessContributionAgent {
        inline app::IBrigthnessContributionAgent__Class** type_info() {
            static app::IBrigthnessContributionAgent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBrigthnessContributionAgent__Class**)(modloader::win::memory::resolve_rva(0x04707FD8));
            }
            return cache;
        }
        inline app::IBrigthnessContributionAgent__Class* get_class() {
            return il2cpp::get_class<app::IBrigthnessContributionAgent__Class>(type_info(), "", "IBrigthnessContributionAgent");
        }
        inline app::IBrigthnessContributionAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IBrigthnessContributionAgent__Array>(get_class(), size);
        }
        inline app::IBrigthnessContributionAgent__Array* create_array(const std::vector<app::IBrigthnessContributionAgent*>& items) {
            return il2cpp::array_new<app::IBrigthnessContributionAgent__Array>(get_class(), items);
        }
    } // namespace IBrigthnessContributionAgent
} // namespace app::classes::types
