#pragma once
#include <Modloader/app/structs/ManifestResourceInfo.h>
#include <Modloader/app/structs/ManifestResourceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestResourceInfo {
        inline app::ManifestResourceInfo__Class** type_info() {
            static app::ManifestResourceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ManifestResourceInfo__Class**)(modloader::win::memory::resolve_rva(0x0477B0F0));
            }
            return cache;
        }
        inline app::ManifestResourceInfo__Class* get_class() {
            return il2cpp::get_class<app::ManifestResourceInfo__Class>(type_info(), "System.Reflection", "ManifestResourceInfo");
        }
        inline app::ManifestResourceInfo* create() {
            return il2cpp::create_object<app::ManifestResourceInfo>(get_class());
        }
    } // namespace ManifestResourceInfo
} // namespace app::classes::types
