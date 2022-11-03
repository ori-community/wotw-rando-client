#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SharedStatics {
        inline app::SharedStatics__Class** type_info = (app::SharedStatics__Class**)(modloader::win::memory::resolve_rva(0x04783B00));
        inline app::SharedStatics__Class* get_class() {
            return il2cpp::get_class<app::SharedStatics__Class>(type_info, "System", "SharedStatics");
        }
        inline app::SharedStatics* create() {
            return il2cpp::create_object<app::SharedStatics>(get_class());
        }
    } // namespace SharedStatics
} // namespace app::classes::types
