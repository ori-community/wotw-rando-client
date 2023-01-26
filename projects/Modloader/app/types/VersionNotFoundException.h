#pragma once
#include <Modloader/app/structs/VersionNotFoundException.h>
#include <Modloader/app/structs/VersionNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VersionNotFoundException {
        inline app::VersionNotFoundException__Class** type_info() {
            static app::VersionNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VersionNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04746BB8));
            }
            return cache;
        }
        inline app::VersionNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::VersionNotFoundException__Class>(type_info(), "System.Data", "VersionNotFoundException");
        }
        inline app::VersionNotFoundException* create() {
            return il2cpp::create_object<app::VersionNotFoundException>(get_class());
        }
    } // namespace VersionNotFoundException
} // namespace app::classes::types
