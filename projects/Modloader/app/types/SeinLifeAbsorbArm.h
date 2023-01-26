#pragma once
#include <Modloader/app/structs/SeinLifeAbsorbArm.h>
#include <Modloader/app/structs/SeinLifeAbsorbArm__Array.h>
#include <Modloader/app/structs/SeinLifeAbsorbArm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbArm {
        inline app::SeinLifeAbsorbArm__Class** type_info() {
            static app::SeinLifeAbsorbArm__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLifeAbsorbArm__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLifeAbsorbArm__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbArm__Class>(type_info(), "", "SeinLifeAbsorbArm");
        }
        inline app::SeinLifeAbsorbArm* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbArm>(get_class());
        }
        inline app::SeinLifeAbsorbArm__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinLifeAbsorbArm__Array>(get_class(), size);
        }
        inline app::SeinLifeAbsorbArm__Array* create_array(const std::vector<app::SeinLifeAbsorbArm*>& items) {
            return il2cpp::array_new<app::SeinLifeAbsorbArm__Array>(get_class(), items);
        }
    } // namespace SeinLifeAbsorbArm
} // namespace app::classes::types
