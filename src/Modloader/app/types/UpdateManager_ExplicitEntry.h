#pragma once
#include <Modloader/app/structs/UpdateManager_ExplicitEntry.h>
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Array.h>
#include <Modloader/app/structs/UpdateManager_ExplicitEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_ExplicitEntry {
        inline app::UpdateManager_ExplicitEntry__Class** type_info() {
            static app::UpdateManager_ExplicitEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateManager_ExplicitEntry__Class**)(modloader::win::memory::resolve_rva(0x0472CC78));
            }
            return cache;
        }
        inline app::UpdateManager_ExplicitEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_ExplicitEntry__Class>(type_info(), "Moon.Driver", "UpdateManager", "ExplicitEntry");
        }
        inline app::UpdateManager_ExplicitEntry* create() {
            return il2cpp::create_object<app::UpdateManager_ExplicitEntry>(get_class());
        }
        inline app::UpdateManager_ExplicitEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_ExplicitEntry__Array>(get_class(), size);
        }
        inline app::UpdateManager_ExplicitEntry__Array* create_array(const std::vector<app::UpdateManager_ExplicitEntry*>& items) {
            return il2cpp::array_new<app::UpdateManager_ExplicitEntry__Array>(get_class(), items);
        }
    } // namespace UpdateManager_ExplicitEntry
} // namespace app::classes::types
