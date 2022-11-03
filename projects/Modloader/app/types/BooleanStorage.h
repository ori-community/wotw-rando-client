#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BooleanStorage {
        inline app::BooleanStorage__Class** type_info = (app::BooleanStorage__Class**)(modloader::win::memory::resolve_rva(0x0471B5E8));
        inline app::BooleanStorage__Class* get_class() {
            return il2cpp::get_class<app::BooleanStorage__Class>(type_info, "System.Data.Common", "BooleanStorage");
        }
        inline app::BooleanStorage* create() {
            return il2cpp::create_object<app::BooleanStorage>(get_class());
        }
    } // namespace BooleanStorage
} // namespace app::classes::types
