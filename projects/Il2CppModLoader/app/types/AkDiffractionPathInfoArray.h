#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDiffractionPathInfoArray {
        namespace {
            app::AkDiffractionPathInfoArray__Class* type_info_ref = nullptr;
        }
        app::AkDiffractionPathInfoArray__Class** type_info = &type_info_ref;
        inline app::AkDiffractionPathInfoArray__Class* get_class() {
            return il2cpp::get_class<app::AkDiffractionPathInfoArray__Class>(type_info, "", "AkDiffractionPathInfoArray");
        }
        inline app::AkDiffractionPathInfoArray* create() {
            return il2cpp::create_object<app::AkDiffractionPathInfoArray>(get_class());
        }
    } // namespace AkDiffractionPathInfoArray
} // namespace app::classes::types
