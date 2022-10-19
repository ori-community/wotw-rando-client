#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualMachineSummary {
        namespace {
            inline app::VirtualMachineSummary__Class* type_info_ref = nullptr;
        }
        inline app::VirtualMachineSummary__Class** type_info = &type_info_ref;
        inline app::VirtualMachineSummary__Class* get_class() {
            return il2cpp::get_class<app::VirtualMachineSummary__Class>(type_info, "PlayFab.MultiplayerModels", "VirtualMachineSummary");
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
