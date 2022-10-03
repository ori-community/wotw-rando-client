#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlendVector4 {
        namespace {
            app::BlendVector4__Class* type_info_ref = nullptr;
        }
        app::BlendVector4__Class** type_info = &type_info_ref;
        inline app::BlendVector4__Class* get_class() {
            return il2cpp::get_class<app::BlendVector4__Class>(type_info, "", "BlendVector4");
        }
        inline app::BlendVector4* create() {
            return il2cpp::create_object<app::BlendVector4>(get_class());
        }
    } // namespace BlendVector4
} // namespace app::classes::types
