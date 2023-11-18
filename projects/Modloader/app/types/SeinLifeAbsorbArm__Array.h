#pragma once
#include <Modloader/app/structs/SeinLifeAbsorbArm__Array.h>
#include <Modloader/app/structs/SeinLifeAbsorbArm__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbArm__Array {
        inline app::SeinLifeAbsorbArm__Array__Class** type_info() {
            static app::SeinLifeAbsorbArm__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLifeAbsorbArm__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLifeAbsorbArm__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbArm__Array__Class>(type_info(), "", "SeinLifeAbsorbArm[]");
        }
        inline app::SeinLifeAbsorbArm__Array* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbArm__Array>(get_class());
        }
    } // namespace SeinLifeAbsorbArm__Array
} // namespace app::classes::types
