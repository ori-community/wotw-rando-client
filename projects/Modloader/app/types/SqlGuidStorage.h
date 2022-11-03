#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlGuidStorage {
        inline app::SqlGuidStorage__Class** type_info = (app::SqlGuidStorage__Class**)(modloader::win::memory::resolve_rva(0x0470DFC0));
        inline app::SqlGuidStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlGuidStorage__Class>(type_info, "System.Data.Common", "SqlGuidStorage");
        }
        inline app::SqlGuidStorage* create() {
            return il2cpp::create_object<app::SqlGuidStorage>(get_class());
        }
    } // namespace SqlGuidStorage
} // namespace app::classes::types
