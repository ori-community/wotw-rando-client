#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_ExclusiveCommandList {
        namespace {
            inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Class* type_info_ref = nullptr;
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Class** type_info = &type_info_ref;
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_ExclusiveCommandList__Class>(type_info, "", "KeybindingCommandMapAsset", "ExclusiveCommandList");
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_ExclusiveCommandList>(get_class());
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array* create_array(int size) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array>(get_class(), size);
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array* create_array(const std::vector<app::KeybindingCommandMapAsset_ExclusiveCommandList*>& items) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array>(get_class(), items);
        }
    } // namespace KeybindingCommandMapAsset_ExclusiveCommandList
} // namespace app::classes::types
