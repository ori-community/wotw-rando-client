#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RenderThreadWaker {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RenderThreadWaker__Class** type_info;
        inline app::RenderThreadWaker__Class* get_class() {
            return il2cpp::get_class<app::RenderThreadWaker__Class>(type_info, "usedStandaloneScripts", "RenderThreadWaker");
        }
        inline app::RenderThreadWaker* create() {
            return il2cpp::create_object<app::RenderThreadWaker>(get_class());
        }
    } // namespace RenderThreadWaker
} // namespace app::classes::types
