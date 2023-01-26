#pragma once
#include <Modloader/app/structs/Flammable_FlameColor__Enum.h>
#include <Modloader/app/structs/Flammable_FlameColor__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flammable_FlameColor__Enum {
        inline app::Flammable_FlameColor__Enum__Class** type_info() {
            static app::Flammable_FlameColor__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Flammable_FlameColor__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Flammable_FlameColor__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Flammable_FlameColor__Enum__Class>(type_info(), "Moon", "Flammable", "FlameColor");
        }
        inline app::Flammable_FlameColor__Enum* create() {
            return il2cpp::create_object<app::Flammable_FlameColor__Enum>(get_class());
        }
    } // namespace Flammable_FlameColor__Enum
} // namespace app::classes::types
