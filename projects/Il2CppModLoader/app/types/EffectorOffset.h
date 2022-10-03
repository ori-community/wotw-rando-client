#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EffectorOffset {
        namespace {
            app::EffectorOffset__Class* type_info_ref = nullptr;
        }
        app::EffectorOffset__Class** type_info = &type_info_ref;
        inline app::EffectorOffset__Class* get_class() {
            return il2cpp::get_class<app::EffectorOffset__Class>(type_info, "RootMotion.Demos", "EffectorOffset");
        }
        inline app::EffectorOffset* create() {
            return il2cpp::create_object<app::EffectorOffset>(get_class());
        }
    } // namespace EffectorOffset
} // namespace app::classes::types
