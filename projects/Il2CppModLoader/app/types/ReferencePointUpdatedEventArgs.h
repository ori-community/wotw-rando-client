#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReferencePointUpdatedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReferencePointUpdatedEventArgs__Class** type_info;
        inline app::ReferencePointUpdatedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ReferencePointUpdatedEventArgs__Class>(type_info, "UnityEngine.Experimental.XR", "ReferencePointUpdatedEventArgs");
        }
        inline app::ReferencePointUpdatedEventArgs* create() {
            return il2cpp::create_object<app::ReferencePointUpdatedEventArgs>(get_class());
        }
        inline app::ReferencePointUpdatedEventArgs__Boxed* box(app::ReferencePointUpdatedEventArgs value) {
            return il2cpp::box_value<app::ReferencePointUpdatedEventArgs__Boxed>(get_class(), value);
        }
    } // namespace ReferencePointUpdatedEventArgs
} // namespace app::classes::types
