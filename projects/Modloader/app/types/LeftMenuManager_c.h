#pragma once
#include <Modloader/app/structs/LeftMenuManager_c.h>
#include <Modloader/app/structs/LeftMenuManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftMenuManager_c {
        inline app::LeftMenuManager_c__Class** type_info() {
            static app::LeftMenuManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeftMenuManager_c__Class**)(modloader::win::memory::resolve_rva(0x047590E0));
            }
            return cache;
        }
        inline app::LeftMenuManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftMenuManager_c__Class>(type_info(), "", "LeftMenuManager", "<>c");
        }
        inline app::LeftMenuManager_c* create() {
            return il2cpp::create_object<app::LeftMenuManager_c>(get_class());
        }
    } // namespace LeftMenuManager_c
} // namespace app::classes::types
