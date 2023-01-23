#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CaseInsensitiveComparer__Class.h>
#include <Modloader/app/structs/CaseInsensitiveComparer.h>

namespace app::classes::types {
    namespace CaseInsensitiveComparer {
        inline app::CaseInsensitiveComparer__Class** type_info = (app::CaseInsensitiveComparer__Class**)(modloader::win::memory::resolve_rva(0x04767D98));
        inline app::CaseInsensitiveComparer__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveComparer__Class>(type_info, "System.Collections", "CaseInsensitiveComparer");
        }
        inline app::CaseInsensitiveComparer* create() {
            return il2cpp::create_object<app::CaseInsensitiveComparer>(get_class());
        }
    } // namespace CaseInsensitiveComparer
} // namespace app::classes::types
