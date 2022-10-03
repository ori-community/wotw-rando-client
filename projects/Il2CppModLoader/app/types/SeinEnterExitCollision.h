#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEnterExitCollision {
        namespace {
            app::SeinEnterExitCollision__Class* type_info_ref = nullptr;
        }
        app::SeinEnterExitCollision__Class** type_info = &type_info_ref;
        inline app::SeinEnterExitCollision__Class* get_class() {
            return il2cpp::get_class<app::SeinEnterExitCollision__Class>(type_info, "", "SeinEnterExitCollision");
        }
        inline app::SeinEnterExitCollision* create() {
            return il2cpp::create_object<app::SeinEnterExitCollision>(get_class());
        }
    } // namespace SeinEnterExitCollision
} // namespace app::classes::types
