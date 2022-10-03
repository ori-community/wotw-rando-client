#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UTF8StringPtr {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UTF8StringPtr__Class** type_info;
        inline app::UTF8StringPtr__Class* get_class() {
            return il2cpp::get_class<app::UTF8StringPtr__Class>(type_info, "XGamingRuntime.Interop", "UTF8StringPtr");
        }
        inline app::UTF8StringPtr* create() {
            return il2cpp::create_object<app::UTF8StringPtr>(get_class());
        }
        inline app::UTF8StringPtr__Boxed* box(app::UTF8StringPtr value) {
            return il2cpp::box_value<app::UTF8StringPtr__Boxed>(get_class(), value);
        }
    } // namespace UTF8StringPtr
} // namespace app::classes::types
