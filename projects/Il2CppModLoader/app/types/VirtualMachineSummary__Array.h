#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VirtualMachineSummary__Array {
        namespace {
            inline app::VirtualMachineSummary__Array__Class* type_info_ref = nullptr;
        }
        inline app::VirtualMachineSummary__Array__Class** type_info = &type_info_ref;
        inline app::VirtualMachineSummary__Array__Class* get_class() {
            return il2cpp::get_class<app::VirtualMachineSummary__Array__Class>(type_info, "PlayFab.MultiplayerModels", "VirtualMachineSummary[]");
        }
        inline app::VirtualMachineSummary__Array* create() {
            return il2cpp::create_object<app::VirtualMachineSummary__Array>(get_class());
        }
    } // namespace VirtualMachineSummary__Array
} // namespace app::classes::types
