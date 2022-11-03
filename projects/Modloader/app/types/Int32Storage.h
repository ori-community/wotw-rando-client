#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Int32Storage {
        inline app::Int32Storage__Class** type_info = (app::Int32Storage__Class**)(modloader::win::memory::resolve_rva(0x04780448));
        inline app::Int32Storage__Class* get_class() {
            return il2cpp::get_class<app::Int32Storage__Class>(type_info, "System.Data.Common", "Int32Storage");
        }
        inline app::Int32Storage* create() {
            return il2cpp::create_object<app::Int32Storage>(get_class());
        }
    } // namespace Int32Storage
} // namespace app::classes::types
