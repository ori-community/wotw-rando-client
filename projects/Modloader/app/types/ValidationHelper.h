#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValidationHelper {
        inline app::ValidationHelper__Class** type_info = (app::ValidationHelper__Class**)(modloader::win::memory::resolve_rva(0x0472CE08));
        inline app::ValidationHelper__Class* get_class() {
            return il2cpp::get_class<app::ValidationHelper__Class>(type_info, "System.Net", "ValidationHelper");
        }
        inline app::ValidationHelper* create() {
            return il2cpp::create_object<app::ValidationHelper>(get_class());
        }
    } // namespace ValidationHelper
} // namespace app::classes::types
