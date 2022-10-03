#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionDisposable_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ActionDisposable_1__Class** type_info;
        inline app::ActionDisposable_1__Class* get_class() {
            return il2cpp::get_class<app::ActionDisposable_1__Class>(type_info, "Moon.Timeline.Constraints", "ActionDisposable");
        }
        inline app::ActionDisposable_1* create() {
            return il2cpp::create_object<app::ActionDisposable_1>(get_class());
        }
    } // namespace ActionDisposable_1
} // namespace app::classes::types
