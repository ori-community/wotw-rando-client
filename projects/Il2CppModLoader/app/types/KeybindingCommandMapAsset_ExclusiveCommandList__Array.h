#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_ExclusiveCommandList__Array {
        namespace {
            inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class** type_info = &type_info_ref;
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class* get_class() {
            return il2cpp::get_class<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array__Class>(type_info, "", "KeybindingCommandMapAsset+ExclusiveCommandList[]");
        }
        inline app::KeybindingCommandMapAsset_ExclusiveCommandList__Array* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_ExclusiveCommandList__Array>(get_class());
        }
    } // namespace KeybindingCommandMapAsset_ExclusiveCommandList__Array
} // namespace app::classes::types
