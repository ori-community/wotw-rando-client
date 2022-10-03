#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEdgeClamber {
        namespace {
            app::SeinEdgeClamber__Class* type_info_ref = nullptr;
        }
        app::SeinEdgeClamber__Class** type_info = &type_info_ref;
        inline app::SeinEdgeClamber__Class* get_class() {
            return il2cpp::get_class<app::SeinEdgeClamber__Class>(type_info, "", "SeinEdgeClamber");
        }
        inline app::SeinEdgeClamber* create() {
            return il2cpp::create_object<app::SeinEdgeClamber>(get_class());
        }
    } // namespace SeinEdgeClamber
} // namespace app::classes::types
