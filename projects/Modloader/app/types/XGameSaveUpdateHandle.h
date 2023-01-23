#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle__Class.h>
#include <Modloader/app/structs/XGameSaveUpdateHandle.h>

namespace app::classes::types {
    namespace XGameSaveUpdateHandle {
        inline app::XGameSaveUpdateHandle__Class** type_info = (app::XGameSaveUpdateHandle__Class**)(modloader::win::memory::resolve_rva(0x04754268));
        inline app::XGameSaveUpdateHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveUpdateHandle__Class>(type_info, "XGamingRuntime", "XGameSaveUpdateHandle");
        }
        inline app::XGameSaveUpdateHandle* create() {
            return il2cpp::create_object<app::XGameSaveUpdateHandle>(get_class());
        }
    } // namespace XGameSaveUpdateHandle
} // namespace app::classes::types
