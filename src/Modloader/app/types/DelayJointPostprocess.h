#pragma once
#include <Modloader/app/structs/DelayJointPostprocess.h>
#include <Modloader/app/structs/DelayJointPostprocess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DelayJointPostprocess {
        inline app::DelayJointPostprocess__Class** type_info() {
            static app::DelayJointPostprocess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DelayJointPostprocess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DelayJointPostprocess__Class* get_class() {
            return il2cpp::get_class<app::DelayJointPostprocess__Class>(type_info(), "Moon.Animation", "DelayJointPostprocess");
        }
        inline app::DelayJointPostprocess* create() {
            return il2cpp::create_object<app::DelayJointPostprocess>(get_class());
        }
    } // namespace DelayJointPostprocess
} // namespace app::classes::types
