#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyZDelayedUnhide {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EarlyZDelayedUnhide__Class** type_info;
        inline app::EarlyZDelayedUnhide__Class* get_class() {
            return il2cpp::get_class<app::EarlyZDelayedUnhide__Class>(type_info, "Moon.Rendering", "EarlyZDelayedUnhide");
        }
        inline app::EarlyZDelayedUnhide* create() {
            return il2cpp::create_object<app::EarlyZDelayedUnhide>(get_class());
        }
    } // namespace EarlyZDelayedUnhide
} // namespace app::classes::types
