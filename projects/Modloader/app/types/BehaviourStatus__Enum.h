#pragma once
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourStatus__Enum {
        inline app::BehaviourStatus__Enum__Class** type_info() {
            static app::BehaviourStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourStatus__Enum__Class**)(modloader::win::memory::resolve_rva(0x047787A0));
            }
            return cache;
        }
        inline app::BehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::BehaviourStatus__Enum__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourStatus");
        }
        inline app::BehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::BehaviourStatus__Enum>(get_class());
        }
    } // namespace BehaviourStatus__Enum
} // namespace app::classes::types
