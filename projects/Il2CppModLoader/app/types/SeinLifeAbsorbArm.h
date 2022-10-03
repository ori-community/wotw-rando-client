#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbArm {
        namespace {
            app::SeinLifeAbsorbArm__Class* type_info_ref = nullptr;
        }
        app::SeinLifeAbsorbArm__Class** type_info = &type_info_ref;
        inline app::SeinLifeAbsorbArm__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbArm__Class>(type_info, "", "SeinLifeAbsorbArm");
        }
        inline app::SeinLifeAbsorbArm* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbArm>(get_class());
        }
        inline app::SeinLifeAbsorbArm__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinLifeAbsorbArm__Array>(get_class(), size);
        }
    } // namespace SeinLifeAbsorbArm
} // namespace app::classes::types
