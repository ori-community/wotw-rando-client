#pragma once
#include <Modloader/app/structs/TargetTransformPostprocess.h>
#include <Modloader/app/structs/TargetTransformPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetTransformPostprocess {
        inline app::TargetTransformPostprocess__Class** type_info() {
            static app::TargetTransformPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetTransformPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetTransformPostprocess__Class* get_class() {
            return il2cpp::get_class<app::TargetTransformPostprocess__Class>(type_info(), "", "TargetTransformPostprocess");
        }
        inline app::TargetTransformPostprocess* create() {
            return il2cpp::create_object<app::TargetTransformPostprocess>(get_class());
        }
    } // namespace TargetTransformPostprocess
} // namespace app::classes::types
