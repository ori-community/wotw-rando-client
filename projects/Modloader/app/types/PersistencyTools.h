#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PersistencyTools__Class.h>
#include <Modloader/app/structs/PersistencyTools.h>

namespace app::classes::types {
    namespace PersistencyTools {
        inline app::PersistencyTools__Class** type_info = (app::PersistencyTools__Class**)(modloader::win::memory::resolve_rva(0x0475DE70));
        inline app::PersistencyTools__Class* get_class() {
            return il2cpp::get_class<app::PersistencyTools__Class>(type_info, "Moon.EditorTools.Persistency", "PersistencyTools");
        }
        inline app::PersistencyTools* create() {
            return il2cpp::create_object<app::PersistencyTools>(get_class());
        }
    } // namespace PersistencyTools
} // namespace app::classes::types
