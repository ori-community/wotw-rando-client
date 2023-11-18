#pragma once
#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum__Array.h>
#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeybindingCommandMapAsset_CommandBindingEnum__Enum {
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class** type_info() {
            static app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475B640));
            }
            return cache;
        }
        inline app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KeybindingCommandMapAsset_CommandBindingEnum__Enum__Class>(type_info(), "", "KeybindingCommandMapAsset", "CommandBindingEnum");
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
