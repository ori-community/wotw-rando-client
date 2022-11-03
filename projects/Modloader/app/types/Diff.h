#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Diff {
        inline app::Diff__Class** type_info = (app::Diff__Class**)(modloader::win::memory::resolve_rva(0x04702158));
        inline app::Diff__Class* get_class() {
            return il2cpp::get_class<app::Diff__Class>(type_info, "SystemIntegration.Synchronizer", "Diff");
        }
        inline app::Diff* create() {
            return il2cpp::create_object<app::Diff>(get_class());
        }
    } // namespace Diff
} // namespace app::classes::types
