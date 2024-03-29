#pragma once
#include <Modloader/app/structs/MenuScreenManager_PostFadeMenuOpen_d_100.h>
#include <Modloader/app/structs/MenuScreenManager_PostFadeMenuOpen_d_100__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager_PostFadeMenuOpen_d_100 {
        inline app::MenuScreenManager_PostFadeMenuOpen_d_100__Class** type_info() {
            static app::MenuScreenManager_PostFadeMenuOpen_d_100__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuScreenManager_PostFadeMenuOpen_d_100__Class**)(modloader::win::memory::resolve_rva(0x0471A238));
            }
            return cache;
        }
        inline app::MenuScreenManager_PostFadeMenuOpen_d_100__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuScreenManager_PostFadeMenuOpen_d_100__Class>(type_info(), "", "MenuScreenManager", "<PostFadeMenuOpen>d__100");
        }
        inline app::MenuScreenManager_PostFadeMenuOpen_d_100* create() {
            return il2cpp::create_object<app::MenuScreenManager_PostFadeMenuOpen_d_100>(get_class());
        }
    } // namespace MenuScreenManager_PostFadeMenuOpen_d_100
} // namespace app::classes::types
