#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MainThreadWorkStealer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MainThreadWorkStealer__Class** type_info;
        inline app::MainThreadWorkStealer__Class* get_class() {
            return il2cpp::get_class<app::MainThreadWorkStealer__Class>(type_info, "usedStandaloneScripts", "MainThreadWorkStealer");
        }
        inline app::MainThreadWorkStealer* create() {
            return il2cpp::create_object<app::MainThreadWorkStealer>(get_class());
        }
    } // namespace MainThreadWorkStealer
} // namespace app::classes::types
