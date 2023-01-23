#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpdateManager__Class.h>
#include <Modloader/app/structs/UpdateManager.h>
#include <Modloader/app/structs/UpdateManager__Array.h>

namespace app::classes::types {
    namespace UpdateManager {
        inline app::UpdateManager__Class** type_info = (app::UpdateManager__Class**)(modloader::win::memory::resolve_rva(0x0471DA88));
        inline app::UpdateManager__Class* get_class() {
            return il2cpp::get_class<app::UpdateManager__Class>(type_info, "Moon.Driver", "UpdateManager");
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
