#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeflateManager {
        inline app::DeflateManager__Class** type_info = (app::DeflateManager__Class**)(modloader::win::memory::resolve_rva(0x04723670));
        inline app::DeflateManager__Class* get_class() {
            return il2cpp::get_class<app::DeflateManager__Class>(type_info, "Ionic.Zlib", "DeflateManager");
        }
        inline app::DeflateManager* create() {
            return il2cpp::create_object<app::DeflateManager>(get_class());
        }
    } // namespace DeflateManager
} // namespace app::classes::types
