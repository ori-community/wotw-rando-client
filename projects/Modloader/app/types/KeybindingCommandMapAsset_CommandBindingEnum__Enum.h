#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum {
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class** type_info = (app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475B640));
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class>(type_info, "", "KeybindingCommandMapAsset", "CommandBindingEnum");
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum* create() {
            return il2cpp::create_object<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum>(get_class());
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array>(get_class(), size);
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array* create_array(const std::vector<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum*>& items) {
            return il2cpp::array_new<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array>(get_class(), items);
        }
    } // namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum
} // namespace app::classes::types
