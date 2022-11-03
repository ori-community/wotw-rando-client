#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeSpanStorage {
        inline app::TimeSpanStorage__Class** type_info = (app::TimeSpanStorage__Class**)(modloader::win::memory::resolve_rva(0x04732570));
        inline app::TimeSpanStorage__Class* get_class() {
            return il2cpp::get_class<app::TimeSpanStorage__Class>(type_info, "System.Data.Common", "TimeSpanStorage");
        }
        inline app::TimeSpanStorage* create() {
            return il2cpp::create_object<app::TimeSpanStorage>(get_class());
        }
    } // namespace TimeSpanStorage
} // namespace app::classes::types
