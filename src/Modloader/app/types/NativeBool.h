#pragma once
#include <Modloader/app/structs/NativeBool.h>
#include <Modloader/app/structs/NativeBool__Boxed.h>
#include <Modloader/app/structs/NativeBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeBool {
        inline app::NativeBool__Class** type_info() {
            static app::NativeBool__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeBool__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeBool__Class* get_class() {
            return il2cpp::get_class<app::NativeBool__Class>(type_info(), "XGamingRuntime.Interop", "NativeBool");
        }
        inline app::NativeBool* create() {
            return il2cpp::create_object<app::NativeBool>(get_class());
        }
        inline app::NativeBool__Boxed* box(app::NativeBool value) {
            return il2cpp::box_value<app::NativeBool__Boxed>(get_class(), value);
        }
    } // namespace NativeBool
} // namespace app::classes::types
