#pragma once
#include <Modloader/app/structs/UpdateManager_c.h>
#include <Modloader/app/structs/UpdateManager_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager_c {
        inline app::UpdateManager_c__Class** type_info() {
            static app::UpdateManager_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateManager_c__Class**)(modloader::win::memory::resolve_rva(0x04725068));
            }
            return cache;
        }
        inline app::UpdateManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UpdateManager_c__Class>(type_info(), "Moon.Driver", "UpdateManager", "<>c");
        }
        inline app::UpdateManager_c* create() {
            return il2cpp::create_object<app::UpdateManager_c>(get_class());
        }
    } // namespace UpdateManager_c
} // namespace app::classes::types
