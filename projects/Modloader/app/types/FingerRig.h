#pragma once
#include <Modloader/app/structs/FingerRig.h>
#include <Modloader/app/structs/FingerRig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FingerRig {
        inline app::FingerRig__Class** type_info() {
            static app::FingerRig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FingerRig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FingerRig__Class* get_class() {
            return il2cpp::get_class<app::FingerRig__Class>(type_info(), "RootMotion.FinalIK", "FingerRig");
        }
        inline app::FingerRig* create() {
            return il2cpp::create_object<app::FingerRig>(get_class());
        }
    } // namespace FingerRig
} // namespace app::classes::types
