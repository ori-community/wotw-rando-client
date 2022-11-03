#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpdateManager_Entry {
        namespace {
            inline app::UpdateManager_Entry__Class* type_info_ref = nullptr;
        }
        inline app::UpdateManager_Entry__Class** type_info = &type_info_ref;
        inline app::UpdateManager_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_Entry__Class>(type_info, "Moon.Driver", "UpdateManager", "Entry");
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
