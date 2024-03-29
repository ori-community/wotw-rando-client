#pragma once
#include <Modloader/app/structs/PlatformHelper.h>
#include <Modloader/app/structs/PlatformHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformHelper {
        inline app::PlatformHelper__Class** type_info() {
            static app::PlatformHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformHelper__Class**)(modloader::win::memory::resolve_rva(0x0478D540));
            }
            return cache;
        }
        inline app::PlatformHelper__Class* get_class() {
            return il2cpp::get_class<app::PlatformHelper__Class>(type_info(), "System.Threading", "PlatformHelper");
        }
        inline app::PlatformHelper* create() {
            return il2cpp::create_object<app::PlatformHelper>(get_class());
        }
    } // namespace PlatformHelper
} // namespace app::classes::types
