#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BaseSpline {
        namespace {
            app::BaseSpline__Class* type_info_ref = nullptr;
        }
        app::BaseSpline__Class** type_info = &type_info_ref;
        inline app::BaseSpline__Class* get_class() {
            return il2cpp::get_class<app::BaseSpline__Class>(type_info, "", "BaseSpline");
        }
        inline app::BaseSpline* create() {
            return il2cpp::create_object<app::BaseSpline>(get_class());
        }
    } // namespace BaseSpline
} // namespace app::classes::types
