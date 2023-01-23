#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinDeathsManager__Class.h>
#include <Modloader/app/structs/SeinDeathsManager.h>

namespace app::classes::types {
    namespace SeinDeathsManager {
        inline app::SeinDeathsManager__Class** type_info = (app::SeinDeathsManager__Class**)(modloader::win::memory::resolve_rva(0x04737DE0));
        inline app::SeinDeathsManager__Class* get_class() {
            return il2cpp::get_class<app::SeinDeathsManager__Class>(type_info, "", "SeinDeathsManager");
        }
        inline app::SeinDeathsManager* create() {
            return il2cpp::create_object<app::SeinDeathsManager>(get_class());
        }
    } // namespace SeinDeathsManager
} // namespace app::classes::types
