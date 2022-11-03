#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsVersionManager {
        inline app::fsVersionManager__Class** type_info = (app::fsVersionManager__Class**)(modloader::win::memory::resolve_rva(0x0473A250));
        inline app::fsVersionManager__Class* get_class() {
            return il2cpp::get_class<app::fsVersionManager__Class>(type_info, "FullSerializer.Internal", "fsVersionManager");
        }
        inline app::fsVersionManager* create() {
            return il2cpp::create_object<app::fsVersionManager>(get_class());
        }
    } // namespace fsVersionManager
} // namespace app::classes::types
