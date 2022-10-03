#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPathParams {
        namespace {
            app::AkPathParams__Class* type_info_ref = nullptr;
        }
        app::AkPathParams__Class** type_info = &type_info_ref;
        inline app::AkPathParams__Class* get_class() {
            return il2cpp::get_class<app::AkPathParams__Class>(type_info, "", "AkPathParams");
        }
        inline app::AkPathParams* create() {
            return il2cpp::create_object<app::AkPathParams>(get_class());
        }
    } // namespace AkPathParams
} // namespace app::classes::types
