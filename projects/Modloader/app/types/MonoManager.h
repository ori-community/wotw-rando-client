#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoManager__Class.h>
#include <Modloader/app/structs/MonoManager.h>

namespace app::classes::types {
    namespace MonoManager {
        inline app::MonoManager__Class** type_info = (app::MonoManager__Class**)(modloader::win::memory::resolve_rva(0x0475D480));
        inline app::MonoManager__Class* get_class() {
            return il2cpp::get_class<app::MonoManager__Class>(type_info, "ParadoxNotion.Services", "MonoManager");
        }
        inline app::MonoManager* create() {
            return il2cpp::create_object<app::MonoManager>(get_class());
        }
    } // namespace MonoManager
} // namespace app::classes::types
