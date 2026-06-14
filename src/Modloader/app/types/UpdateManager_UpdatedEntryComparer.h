#pragma once
#include <Modloader/app/structs/UpdateManager_UpdatedEntryComparer.h>
#include <Modloader/app/structs/UpdateManager_UpdatedEntryComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_UpdatedEntryComparer {
        inline app::UpdateManager_UpdatedEntryComparer__Class** type_info() {
            static app::UpdateManager_UpdatedEntryComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateManager_UpdatedEntryComparer__Class**)(modloader::win::memory::resolve_rva(0x04707228));
            }
            return cache;
        }
        inline app::UpdateManager_UpdatedEntryComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_UpdatedEntryComparer__Class>(type_info(), "Moon.Driver", "UpdateManager", "UpdatedEntryComparer");
        }
        inline app::UpdateManager_UpdatedEntryComparer* create() {
            return il2cpp::create_object<app::UpdateManager_UpdatedEntryComparer>(get_class());
        }
    } // namespace UpdateManager_UpdatedEntryComparer
} // namespace app::classes::types
