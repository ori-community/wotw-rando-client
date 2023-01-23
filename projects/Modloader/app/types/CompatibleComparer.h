#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CompatibleComparer__Class.h>
#include <Modloader/app/structs/CompatibleComparer.h>

namespace app::classes::types {
    namespace CompatibleComparer {
        inline app::CompatibleComparer__Class** type_info = (app::CompatibleComparer__Class**)(modloader::win::memory::resolve_rva(0x047875F0));
        inline app::CompatibleComparer__Class* get_class() {
            return il2cpp::get_class<app::CompatibleComparer__Class>(type_info, "System.Collections", "CompatibleComparer");
        }
        inline app::CompatibleComparer* create() {
            return il2cpp::create_object<app::CompatibleComparer>(get_class());
        }
    } // namespace CompatibleComparer
} // namespace app::classes::types
