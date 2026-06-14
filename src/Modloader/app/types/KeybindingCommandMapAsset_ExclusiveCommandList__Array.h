#pragma once
#include <Modloader/app/structs/KeybindingCommandMapAsset_ExclusiveCommandList__Array.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_ExclusiveCommandList__Array {
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class** type_info() {
            static app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class* get_class() {
            return il2cpp::get_class<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class>(type_info(), "", "KeybindingCommandMapAsset+ExclusiveCommandList[]");
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array>(get_class());
        }
    } // namespace KeybindingCommandMapAsset_ExclusiveCommandList__Array
} // namespace app::classes::types
