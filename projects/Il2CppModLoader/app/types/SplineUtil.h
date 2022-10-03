#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SplineUtil {
        namespace {
            app::SplineUtil__Class* type_info_ref = nullptr;
        }
        app::SplineUtil__Class** type_info = &type_info_ref;
        inline app::SplineUtil__Class* get_class() {
            return il2cpp::get_class<app::SplineUtil__Class>(type_info, "", "SplineUtil");
        }
        inline app::SplineUtil* create() {
            return il2cpp::create_object<app::SplineUtil>(get_class());
        }
    } // namespace SplineUtil
} // namespace app::classes::types
