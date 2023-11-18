#pragma once
#include <Modloader/app/structs/KeybindingCommandMapAsset_ExclusiveCommandList.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_ExclusiveCommandList__Array.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_ExclusiveCommandList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_ExclusiveCommandList {
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Class** type_info() {
            static app::KeybindingCommandMapAsset_ExclusiveCommandList__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeybindingCommandMapAsset_ExclusiveCommandList__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_ExclusiveCommandList__Class>(type_info(), "", "KeybindingCommandMapAsset", "ExclusiveCommandList");
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
