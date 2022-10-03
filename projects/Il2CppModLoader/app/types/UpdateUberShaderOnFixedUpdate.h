#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUberShaderOnFixedUpdate {
        namespace {
            app::UpdateUberShaderOnFixedUpdate__Class* type_info_ref = nullptr;
        }
        app::UpdateUberShaderOnFixedUpdate__Class** type_info = &type_info_ref;
        inline app::UpdateUberShaderOnFixedUpdate__Class* get_class() {
            return il2cpp::get_class<app::UpdateUberShaderOnFixedUpdate__Class>(type_info, "", "UpdateUberShaderOnFixedUpdate");
        }
        inline app::UpdateUberShaderOnFixedUpdate* create() {
            return il2cpp::create_object<app::UpdateUberShaderOnFixedUpdate>(get_class());
        }
    } // namespace UpdateUberShaderOnFixedUpdate
} // namespace app::classes::types
