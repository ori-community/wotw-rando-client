#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScalePositionForAspectRatio {
        namespace {
            app::ScalePositionForAspectRatio__Class* type_info_ref = nullptr;
        }
        app::ScalePositionForAspectRatio__Class** type_info = &type_info_ref;
        inline app::ScalePositionForAspectRatio__Class* get_class() {
            return il2cpp::get_class<app::ScalePositionForAspectRatio__Class>(type_info, "", "ScalePositionForAspectRatio");
        }
        inline app::ScalePositionForAspectRatio* create() {
            return il2cpp::create_object<app::ScalePositionForAspectRatio>(get_class());
        }
    } // namespace ScalePositionForAspectRatio
} // namespace app::classes::types
