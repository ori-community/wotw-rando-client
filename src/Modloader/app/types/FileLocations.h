#pragma once
#include <Modloader/app/structs/FileLocations.h>
#include <Modloader/app/structs/FileLocations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FileLocations {
        inline app::FileLocations__Class** type_info() {
            static app::FileLocations__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FileLocations__Class**)(modloader::win::memory::resolve_rva(0x047138D8));
            }
            return cache;
        }
        inline app::FileLocations__Class* get_class() {
            return il2cpp::get_class<app::FileLocations__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "FileLocations");
        }
        inline app::FileLocations* create() {
            return il2cpp::create_object<app::FileLocations>(get_class());
        }
    } // namespace FileLocations
} // namespace app::classes::types
