#pragma once
#include <Modloader/app/structs/Sharpen_Settings.h>
#include <Modloader/app/structs/Sharpen_Settings__Boxed.h>
#include <Modloader/app/structs/Sharpen_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Sharpen_Settings {
        inline app::Sharpen_Settings__Class** type_info() {
            static app::Sharpen_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Sharpen_Settings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Sharpen_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::Sharpen_Settings__Class>(type_info(), "Colorful", "Sharpen", "Settings");
        }
        inline app::Sharpen_Settings* create() {
            return il2cpp::create_object<app::Sharpen_Settings>(get_class());
        }
        inline app::Sharpen_Settings__Boxed* box(app::Sharpen_Settings value) {
            return il2cpp::box_value<app::Sharpen_Settings__Boxed>(get_class(), value);
        }
    } // namespace Sharpen_Settings
} // namespace app::classes::types
