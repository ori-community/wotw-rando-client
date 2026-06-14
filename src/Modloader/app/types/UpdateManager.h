#pragma once
#include <Modloader/app/structs/UpdateManager.h>
#include <Modloader/app/structs/UpdateManager__Array.h>
#include <Modloader/app/structs/UpdateManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateManager {
        inline app::UpdateManager__Class** type_info() {
            static app::UpdateManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UpdateManager__Class**)(modloader::win::memory::resolve_rva(0x0471DA88));
            }
            return cache;
        }
        inline app::UpdateManager__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager__Class>(type_info(), "Moon.Driver", "UpdateManager");
        }
        inline app::UpdateManager* create() {
            return il2cpp::create_object<app::UpdateManager>(get_class());
        }
        inline app::UpdateManager__Array* create_array(int size) {
            return il2cpp::array_new<app::UpdateManager__Array>(get_class(), size);
        }
        inline app::UpdateManager__Array* create_array(const std::vector<app::UpdateManager*>& items) {
            return il2cpp::array_new<app::UpdateManager__Array>(get_class(), items);
        }
    } // namespace UpdateManager
} // namespace app::classes::types
