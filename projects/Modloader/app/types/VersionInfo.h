#pragma once
#include <Modloader/app/structs/VersionInfo.h>
#include <Modloader/app/structs/VersionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VersionInfo {
        inline app::VersionInfo__Class** type_info() {
            static app::VersionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VersionInfo__Class**)(modloader::win::memory::resolve_rva(0x047843C0));
            }
            return cache;
        }
        inline app::VersionInfo__Class* get_class() {
            return il2cpp::get_class<app::VersionInfo__Class>(type_info(), "AmplifyColor", "VersionInfo");
        }
        inline app::VersionInfo* create() {
            return il2cpp::create_object<app::VersionInfo>(get_class());
        }
    } // namespace VersionInfo
} // namespace app::classes::types
