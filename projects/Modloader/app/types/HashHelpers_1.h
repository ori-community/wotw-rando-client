#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HashHelpers_1 {
        inline app::HashHelpers_1__Class** type_info = (app::HashHelpers_1__Class**)(modloader::win::memory::resolve_rva(0x04723550));
        inline app::HashHelpers_1__Class* get_class() {
            return il2cpp::get_class<app::HashHelpers_1__Class>(type_info, "System.Collections", "HashHelpers");
        }
        inline app::HashHelpers_1* create() {
            return il2cpp::create_object<app::HashHelpers_1>(get_class());
        }
    } // namespace HashHelpers_1
} // namespace app::classes::types
