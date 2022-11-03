#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestroyDetector {
        namespace {
            inline app::DestroyDetector__Class* type_info_ref = nullptr;
        }
        inline app::DestroyDetector__Class** type_info = &type_info_ref;
        inline app::DestroyDetector__Class* get_class() {
            return il2cpp::get_class<app::DestroyDetector__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DestroyDetector");
        }
        inline app::DestroyDetector* create() {
            return il2cpp::create_object<app::DestroyDetector>(get_class());
        }
    } // namespace DestroyDetector
} // namespace app::classes::types
