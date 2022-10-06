#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager_SuspensionTicket {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SuspensionManager_SuspensionTicket__Class** type_info;
        inline app::SuspensionManager_SuspensionTicket__Class* get_class() {
            return il2cpp::get_nested_class<app::SuspensionManager_SuspensionTicket__Class>(type_info, "Moon", "SuspensionManager", "SuspensionTicket");
        }
        inline app::SuspensionManager_SuspensionTicket* create() {
            return il2cpp::create_object<app::SuspensionManager_SuspensionTicket>(get_class());
        }
        inline app::SuspensionManager_SuspensionTicket__Array* create_array(int size) {
            return il2cpp::array_new<app::SuspensionManager_SuspensionTicket__Array>(get_class(), size);
        }
        inline app::SuspensionManager_SuspensionTicket__Array* create_array(const std::vector<app::SuspensionManager_SuspensionTicket*>& items) {
            return il2cpp::array_new<app::SuspensionManager_SuspensionTicket__Array>(get_class(), items);
        }
    } // namespace SuspensionManager_SuspensionTicket
} // namespace app::classes::types
