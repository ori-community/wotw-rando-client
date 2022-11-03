#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LocalCertSelectionCallback {
        inline app::LocalCertSelectionCallback__Class** type_info = (app::LocalCertSelectionCallback__Class**)(modloader::win::memory::resolve_rva(0x0473FD50));
        inline app::LocalCertSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::LocalCertSelectionCallback__Class>(type_info, "System.Net.Security", "LocalCertSelectionCallback");
        }
        inline app::LocalCertSelectionCallback* create() {
            return il2cpp::create_object<app::LocalCertSelectionCallback>(get_class());
        }
    } // namespace LocalCertSelectionCallback
} // namespace app::classes::types
