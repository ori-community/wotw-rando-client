#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateMainGameViewRect {
        namespace {
            inline app::EarlyUpdate_UpdateMainGameViewRect__Class* type_info_ref = nullptr;
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateMainGameViewRect__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateMainGameViewRect__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateMainGameViewRect");
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateMainGameViewRect>(get_class());
        }
        inline app::EarlyUpdate_UpdateMainGameViewRect__Boxed* box(app::EarlyUpdate_UpdateMainGameViewRect value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateMainGameViewRect__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateMainGameViewRect
} // namespace app::classes::types
