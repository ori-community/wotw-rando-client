#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLifeAbsorbArm__Array {
        namespace {
            inline app::SeinLifeAbsorbArm__Array__Class* type_info_ref = nullptr;
        }
        inline app::SeinLifeAbsorbArm__Array__Class** type_info = &type_info_ref;
        inline app::SeinLifeAbsorbArm__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinLifeAbsorbArm__Array__Class>(type_info, "", "SeinLifeAbsorbArm[]");
        }
        inline app::SeinLifeAbsorbArm__Array* create() {
            return il2cpp::create_object<app::SeinLifeAbsorbArm__Array>(get_class());
        }
    } // namespace SeinLifeAbsorbArm__Array
} // namespace app::classes::types
