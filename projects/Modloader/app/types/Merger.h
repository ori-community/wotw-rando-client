#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Merger__Class.h>
#include <Modloader/app/structs/Merger.h>

namespace app::classes::types {
    namespace Merger {
        inline app::Merger__Class** type_info = (app::Merger__Class**)(modloader::win::memory::resolve_rva(0x047979A0));
        inline app::Merger__Class* get_class() {
            return il2cpp::get_class<app::Merger__Class>(type_info, "System.Data", "Merger");
        }
        inline app::Merger* create() {
            return il2cpp::create_object<app::Merger>(get_class());
        }
    } // namespace Merger
} // namespace app::classes::types
