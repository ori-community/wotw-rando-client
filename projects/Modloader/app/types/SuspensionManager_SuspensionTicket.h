#pragma once
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket.h>
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Array.h>
#include <Modloader/app/structs/SuspensionManager_SuspensionTicket__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SuspensionManager_SuspensionTicket {
        inline app::SuspensionManager_SuspensionTicket__Class** type_info() {
            static app::SuspensionManager_SuspensionTicket__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SuspensionManager_SuspensionTicket__Class**)(modloader::win::memory::resolve_rva(0x047715A8));
            }
            return cache;
        }
        inline app::SuspensionManager_SuspensionTicket__Class* get_class() {
            return il2cpp::get_nested_class<app::SuspensionManager_SuspensionTicket__Class>(type_info(), "Moon", "SuspensionManager", "SuspensionTicket");
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
