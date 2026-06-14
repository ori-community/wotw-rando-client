#pragma once
#include <Modloader/app/structs/MenuScreenManager.h>
#include <Modloader/app/structs/MenuScreenManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuScreenManager {
        inline app::MenuScreenManager__Class** type_info() {
            static app::MenuScreenManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuScreenManager__Class**)(modloader::win::memory::resolve_rva(0x04701420));
            }
            return cache;
        }
        inline app::MenuScreenManager__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenManager__Class>(type_info(), "", "MenuScreenManager");
        }
        inline app::MenuScreenManager* create() {
            return il2cpp::create_object<app::MenuScreenManager>(get_class());
        }
    } // namespace MenuScreenManager
} // namespace app::classes::types
