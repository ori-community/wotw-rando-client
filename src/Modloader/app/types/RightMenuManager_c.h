#pragma once
#include <Modloader/app/structs/RightMenuManager_c.h>
#include <Modloader/app/structs/RightMenuManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RightMenuManager_c {
        inline app::RightMenuManager_c__Class** type_info() {
            static app::RightMenuManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RightMenuManager_c__Class**)(modloader::win::memory::resolve_rva(0x047707E8));
            }
            return cache;
        }
        inline app::RightMenuManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RightMenuManager_c__Class>(type_info(), "", "RightMenuManager", "<>c");
        }
        inline app::RightMenuManager_c* create() {
            return il2cpp::create_object<app::RightMenuManager_c>(get_class());
        }
    } // namespace RightMenuManager_c
} // namespace app::classes::types
