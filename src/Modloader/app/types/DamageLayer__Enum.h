#pragma once
#include <Modloader/app/structs/DamageLayer__Enum.h>
#include <Modloader/app/structs/DamageLayer__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageLayer__Enum {
        inline app::DamageLayer__Enum__Class** type_info() {
            static app::DamageLayer__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageLayer__Enum__Class**)(modloader::win::memory::resolve_rva(0x04757010));
            }
            return cache;
        }
        inline app::DamageLayer__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageLayer__Enum__Class>(type_info(), "Moon", "DamageLayer");
        }
        inline app::DamageLayer__Enum* create() {
            return il2cpp::create_object<app::DamageLayer__Enum>(get_class());
        }
    } // namespace DamageLayer__Enum
} // namespace app::classes::types
