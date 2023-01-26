#pragma once
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flammable_FlameState__Enum {
        inline app::Flammable_FlameState__Enum__Class** type_info() {
            static app::Flammable_FlameState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Flammable_FlameState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Flammable_FlameState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Flammable_FlameState__Enum__Class>(type_info(), "Moon", "Flammable", "FlameState");
        }
        inline app::Flammable_FlameState__Enum* create() {
            return il2cpp::create_object<app::Flammable_FlameState__Enum>(get_class());
        }
    } // namespace Flammable_FlameState__Enum
} // namespace app::classes::types
