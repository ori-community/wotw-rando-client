#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XUserLocalId {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XUserLocalId__Class** type_info;
        inline app::XUserLocalId__Class* get_class() {
            return il2cpp::get_class<app::XUserLocalId__Class>(type_info, "XGamingRuntime", "XUserLocalId");
        }
        inline app::XUserLocalId* create() {
            return il2cpp::create_object<app::XUserLocalId>(get_class());
        }
        inline app::XUserLocalId__Boxed* box(app::XUserLocalId value) {
            return il2cpp::box_value<app::XUserLocalId__Boxed>(get_class(), value);
        }
    } // namespace XUserLocalId
} // namespace app::classes::types
