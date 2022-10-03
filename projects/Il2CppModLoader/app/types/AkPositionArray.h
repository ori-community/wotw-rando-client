#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkPositionArray {
        namespace {
            app::AkPositionArray__Class* type_info_ref = nullptr;
        }
        app::AkPositionArray__Class** type_info = &type_info_ref;
        inline app::AkPositionArray__Class* get_class() {
            return il2cpp::get_class<app::AkPositionArray__Class>(type_info, "", "AkPositionArray");
        }
        inline app::AkPositionArray* create() {
            return il2cpp::create_object<app::AkPositionArray>(get_class());
        }
    } // namespace AkPositionArray
} // namespace app::classes::types
