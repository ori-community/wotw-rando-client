#pragma once
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageLayerMask__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageLayerMask__Enum {
        inline app::DamageLayerMask__Enum__Class** type_info() {
            static app::DamageLayerMask__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageLayerMask__Enum__Class**)(modloader::win::memory::resolve_rva(0x04710EF0));
            }
            return cache;
        }
        inline app::DamageLayerMask__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageLayerMask__Enum__Class>(type_info(), "Moon", "DamageLayerMask");
        }
        inline app::DamageLayerMask__Enum* create() {
            return il2cpp::create_object<app::DamageLayerMask__Enum>(get_class());
        }
    } // namespace DamageLayerMask__Enum
} // namespace app::classes::types
