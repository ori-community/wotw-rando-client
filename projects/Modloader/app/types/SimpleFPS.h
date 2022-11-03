#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SimpleFPS {
        inline app::SimpleFPS__Class** type_info = (app::SimpleFPS__Class**)(modloader::win::memory::resolve_rva(0x04765170));
        inline app::SimpleFPS__Class* get_class() {
            return il2cpp::get_class<app::SimpleFPS__Class>(type_info, "", "SimpleFPS");
        }
        inline app::SimpleFPS* create() {
            return il2cpp::create_object<app::SimpleFPS>(get_class());
        }
    } // namespace SimpleFPS
} // namespace app::classes::types
