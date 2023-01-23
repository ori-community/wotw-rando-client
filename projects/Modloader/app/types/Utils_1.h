#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Utils_1__Class.h>
#include <Modloader/app/structs/Utils_1.h>

namespace app::classes::types {
    namespace Utils_1 {
        inline app::Utils_1__Class** type_info = (app::Utils_1__Class**)(modloader::win::memory::resolve_rva(0x04732778));
        inline app::Utils_1__Class* get_class() {
            return il2cpp::get_class<app::Utils_1__Class>(type_info, "System.Linq.Expressions", "Utils");
        }
        inline app::Utils_1* create() {
            return il2cpp::create_object<app::Utils_1>(get_class());
        }
    } // namespace Utils_1
} // namespace app::classes::types
