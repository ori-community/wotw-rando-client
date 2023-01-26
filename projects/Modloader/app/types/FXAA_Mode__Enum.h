#pragma once
#include <Modloader/app/structs/FXAA_Mode__Enum.h>
#include <Modloader/app/structs/FXAA_Mode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FXAA_Mode__Enum {
        inline app::FXAA_Mode__Enum__Class** type_info() {
            static app::FXAA_Mode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FXAA_Mode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FXAA_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_Mode__Enum__Class>(type_info(), "Moon.Rendering", "FXAA", "Mode");
        }
        inline app::FXAA_Mode__Enum* create() {
            return il2cpp::create_object<app::FXAA_Mode__Enum>(get_class());
        }
    } // namespace FXAA_Mode__Enum
} // namespace app::classes::types
