#pragma once
#include <Modloader/app/structs/MenuTabManager.h>
#include <Modloader/app/structs/MenuTabManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuTabManager {
        inline app::MenuTabManager__Class** type_info() {
            static app::MenuTabManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuTabManager__Class**)(modloader::win::memory::resolve_rva(0x0472A508));
            }
            return cache;
        }
        inline app::MenuTabManager__Class* get_class() {
            return il2cpp::get_class<app::MenuTabManager__Class>(type_info(), "", "MenuTabManager");
        }
        inline app::MenuTabManager* create() {
            return il2cpp::create_object<app::MenuTabManager>(get_class());
        }
    } // namespace MenuTabManager
} // namespace app::classes::types
