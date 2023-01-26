#pragma once
#include <Modloader/app/structs/TitleScreenManager.h>
#include <Modloader/app/structs/TitleScreenManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleScreenManager {
        inline app::TitleScreenManager__Class** type_info() {
            static app::TitleScreenManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TitleScreenManager__Class**)(modloader::win::memory::resolve_rva(0x0475E990));
            }
            return cache;
        }
        inline app::TitleScreenManager__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenManager__Class>(type_info(), "", "TitleScreenManager");
        }
        inline app::TitleScreenManager* create() {
            return il2cpp::create_object<app::TitleScreenManager>(get_class());
        }
    } // namespace TitleScreenManager
} // namespace app::classes::types
