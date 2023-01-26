#pragma once
#include <Modloader/app/structs/KissingRig.h>
#include <Modloader/app/structs/KissingRig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KissingRig {
        inline app::KissingRig__Class** type_info() {
            static app::KissingRig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KissingRig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KissingRig__Class* get_class() {
            return il2cpp::get_class<app::KissingRig__Class>(type_info(), "RootMotion.Demos", "KissingRig");
        }
        inline app::KissingRig* create() {
            return il2cpp::create_object<app::KissingRig>(get_class());
        }
    } // namespace KissingRig
} // namespace app::classes::types
