#pragma once
#include <Modloader/app/structs/UpdateManager__Array.h>
#include <Modloader/app/structs/UpdateManager__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager__Array {
        inline app::UpdateManager__Array__Class** type_info() {
            static app::UpdateManager__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateManager__Array__Class**)(modloader::win::memory::resolve_rva(0x04783BE8));
            }
            return cache;
        }
        inline app::UpdateManager__Array__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager__Array__Class>(type_info(), "Moon.Driver", "UpdateManager[]");
        }
        inline app::UpdateManager__Array* create() {
            return il2cpp::create_object<app::UpdateManager__Array>(get_class());
        }
    } // namespace UpdateManager__Array
} // namespace app::classes::types
