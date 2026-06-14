#pragma once
#include <Modloader/app/structs/UpdateManager_Entry.h>
#include <Modloader/app/structs/UpdateManager_Entry__Array.h>
#include <Modloader/app/structs/UpdateManager_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_Entry {
        inline app::UpdateManager_Entry__Class** type_info() {
            static app::UpdateManager_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateManager_Entry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateManager_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_Entry__Class>(type_info(), "Moon.Driver", "UpdateManager", "Entry");
        }
        inline app::UpdateManager_Entry* create() {
            return il2cpp::create_object<app::UpdateManager_Entry>(get_class());
        }
        inline app::UpdateManager_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager_Entry__Array>(get_class(), size);
        }
        inline app::UpdateManager_Entry__Array* create_array(const std::vector<app::UpdateManager_Entry*>& items) {
            return il2cpp::array_new<app::UpdateManager_Entry__Array>(get_class(), items);
        }
    } // namespace UpdateManager_Entry
} // namespace app::classes::types
