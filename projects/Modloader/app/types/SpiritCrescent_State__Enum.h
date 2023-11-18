#pragma once
#include <Modloader/app/structs/SpiritCrescent_State__Enum.h>
#include <Modloader/app/structs/SpiritCrescent_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritCrescent_State__Enum {
        inline app::SpiritCrescent_State__Enum__Class** type_info() {
            static app::SpiritCrescent_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritCrescent_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritCrescent_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritCrescent_State__Enum__Class>(type_info(), "", "SpiritCrescent", "State");
        }
        inline app::SpiritCrescent_State__Enum* create() {
            return il2cpp::create_object<app::SpiritCrescent_State__Enum>(get_class());
        }
    } // namespace SpiritCrescent_State__Enum
} // namespace app::classes::types
