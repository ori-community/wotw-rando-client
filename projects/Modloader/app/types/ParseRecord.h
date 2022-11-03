#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParseRecord {
        inline app::ParseRecord__Class** type_info = (app::ParseRecord__Class**)(modloader::win::memory::resolve_rva(0x0477BFF8));
        inline app::ParseRecord__Class* get_class() {
            return il2cpp::get_class<app::ParseRecord__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");
        }
        inline app::ParseRecord* create() {
            return il2cpp::create_object<app::ParseRecord>(get_class());
        }
    } // namespace ParseRecord
} // namespace app::classes::types
