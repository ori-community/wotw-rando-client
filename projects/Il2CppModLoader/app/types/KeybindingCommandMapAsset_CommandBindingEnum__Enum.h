#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class** type_info;
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class>(type_info, "", "KeybindingCommandMapAsset", "CommandBindingEnum");
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum>(get_class());
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array>(get_class(), size);
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array* create_array(const std::vector<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array>(get_class(), items);
        }
    } // namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum
} // namespace app::classes::types
