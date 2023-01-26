#pragma once
#include <Modloader/app/structs/ChangeDetectorApproxFloat.h>
#include <Modloader/app/structs/ChangeDetectorApproxFloat__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeDetectorApproxFloat {
        inline app::ChangeDetectorApproxFloat__Class** type_info() {
            static app::ChangeDetectorApproxFloat__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeDetectorApproxFloat__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeDetectorApproxFloat__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorApproxFloat__Class>(type_info(), "", "ChangeDetectorApproxFloat");
        }
        inline app::ChangeDetectorApproxFloat* create() {
            return il2cpp::create_object<app::ChangeDetectorApproxFloat>(get_class());
        }
    } // namespace ChangeDetectorApproxFloat
} // namespace app::classes::types
