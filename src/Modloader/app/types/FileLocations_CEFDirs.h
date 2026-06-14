#pragma once
#include <Modloader/app/structs/FileLocations_CEFDirs.h>
#include <Modloader/app/structs/FileLocations_CEFDirs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileLocations_CEFDirs {
        inline app::FileLocations_CEFDirs__Class** type_info() {
            static app::FileLocations_CEFDirs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileLocations_CEFDirs__Class**)(modloader::win::memory::resolve_rva(0x0470AE50));
            }
            return cache;
        }
        inline app::FileLocations_CEFDirs__Class* get_class() {
            return il2cpp::get_nested_class<app::FileLocations_CEFDirs__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "FileLocations", "CEFDirs");
        }
        inline app::FileLocations_CEFDirs* create() {
            return il2cpp::create_object<app::FileLocations_CEFDirs>(get_class());
        }
    } // namespace FileLocations_CEFDirs
} // namespace app::classes::types
