#pragma once
#include <Modloader/app/structs/MenuTabManager_c.h>
#include <Modloader/app/structs/MenuTabManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MenuTabManager_c {
        inline app::MenuTabManager_c__Class** type_info() {
            static app::MenuTabManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MenuTabManager_c__Class**)(modloader::win::memory::resolve_rva(0x047245D0));
            }
            return cache;
        }
        inline app::MenuTabManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MenuTabManager_c__Class>(type_info(), "", "MenuTabManager", "<>c");
        }
        inline app::MenuTabManager_c* create() {
            return il2cpp::create_object<app::MenuTabManager_c>(get_class());
        }
    } // namespace MenuTabManager_c
} // namespace app::classes::types
