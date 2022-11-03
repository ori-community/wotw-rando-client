#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeOffset__Array {
        inline app::DateTimeOffset__Array__Class** type_info = (app::DateTimeOffset__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A000));
        inline app::DateTimeOffset__Array__Class* get_class() {
            return il2cpp::get_class<app::DateTimeOffset__Array__Class>(type_info, "System", "DateTimeOffset[]");
        }
        inline app::DateTimeOffset__Array* create() {
            return il2cpp::create_object<app::DateTimeOffset__Array>(get_class());
        }
    } // namespace DateTimeOffset__Array
} // namespace app::classes::types
