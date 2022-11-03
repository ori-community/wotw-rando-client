#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Warning {
        inline app::Warning__Class** type_info = (app::Warning__Class**)(modloader::win::memory::resolve_rva(0x04774F90));
        inline app::Warning__Class* get_class() {
            return il2cpp::get_class<app::Warning__Class>(type_info, "RootMotion", "Warning");
        }
        inline app::Warning* create() {
            return il2cpp::create_object<app::Warning>(get_class());
        }
    } // namespace Warning
} // namespace app::classes::types
