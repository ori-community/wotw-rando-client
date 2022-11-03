#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogosState {
        inline app::LogosState__Class** type_info = (app::LogosState__Class**)(modloader::win::memory::resolve_rva(0x04706DE8));
        inline app::LogosState__Class* get_class() {
            return il2cpp::get_class<app::LogosState__Class>(type_info, "", "LogosState");
        }
        inline app::LogosState* create() {
            return il2cpp::create_object<app::LogosState>(get_class());
        }
    } // namespace LogosState
} // namespace app::classes::types
