#pragma once
#include <Modloader/app/structs/ColorApplyRule__Enum.h>
#include <Modloader/app/structs/ColorApplyRule__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorApplyRule__Enum {
        inline app::ColorApplyRule__Enum__Class** type_info() {
            static app::ColorApplyRule__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorApplyRule__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorApplyRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::ColorApplyRule__Enum__Class>(type_info(), "Moon.EffectsFramework.Wisps", "ColorApplyRule");
        }
        inline app::ColorApplyRule__Enum* create() {
            return il2cpp::create_object<app::ColorApplyRule__Enum>(get_class());
        }
    } // namespace ColorApplyRule__Enum
} // namespace app::classes::types
