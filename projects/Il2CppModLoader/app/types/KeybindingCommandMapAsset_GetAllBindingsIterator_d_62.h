#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_GetAllBindingsIterator_d_62 {
        inline app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class** type_info = (app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class**)(modloader::win::memory::resolve_rva(0x047608F0));
        inline app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62__Class>(type_info, "", "KeybindingCommandMapAsset", "<GetAllBindingsIterator>d__62");
        }
        inline app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_GetAllBindingsIterator_d_62>(get_class());
        }
    } // namespace KeybindingCommandMapAsset_GetAllBindingsIterator_d_62
} // namespace app::classes::types
