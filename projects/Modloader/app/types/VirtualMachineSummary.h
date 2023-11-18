#pragma once
#include <Modloader/app/structs/VirtualMachineSummary.h>
#include <Modloader/app/structs/VirtualMachineSummary__Array.h>
#include <Modloader/app/structs/VirtualMachineSummary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VirtualMachineSummary {
        inline app::VirtualMachineSummary__Class** type_info() {
            static app::VirtualMachineSummary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VirtualMachineSummary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VirtualMachineSummary__Class* get_class() {
            return il2cpp::get_class<app::VirtualMachineSummary__Class>(type_info(), "PlayFab.MultiplayerModels", "VirtualMachineSummary");
        }
        inline app::VirtualMachineSummary* create() {
            return il2cpp::create_object<app::VirtualMachineSummary>(get_class());
        }
        inline app::VirtualMachineSummary__Array* create_array(int size) {
            return il2cpp::array_new<app::VirtualMachineSummary__Array>(get_class(), size);
        }
        inline app::VirtualMachineSummary__Array* create_array(const std::vector<app::VirtualMachineSummary*>& items) {
            return il2cpp::array_new<app::VirtualMachineSummary__Array>(get_class(), items);
        }
    } // namespace VirtualMachineSummary
} // namespace app::classes::types
