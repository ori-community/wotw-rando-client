#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Sharpen_Settings {
        namespace {
            inline app::Sharpen_Settings__Class* type_info_ref = nullptr;
        }
        inline app::Sharpen_Settings__Class** type_info = &type_info_ref;
        inline app::Sharpen_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::Sharpen_Settings__Class>(type_info, "Colorful", "Sharpen", "Settings");
        }
        inline app::Sharpen_Settings* create() {
            return il2cpp::create_object<app::Sharpen_Settings>(get_class());
        }
        inline app::Sharpen_Settings__Boxed* box(app::Sharpen_Settings value) {
            return il2cpp::box_value<app::Sharpen_Settings__Boxed>(get_class(), value);
        }
    } // namespace Sharpen_Settings
} // namespace app::classes::types
