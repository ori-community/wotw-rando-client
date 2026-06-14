#pragma once
#include <Modloader/app/structs/Version.h>
#include <Modloader/app/structs/Version__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Version {
        inline app::Version__Class** type_info() {
            static app::Version__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Version__Class**)(modloader::win::memory::resolve_rva(0x04756158));
            }
            return cache;
        }
        inline app::Version__Class* get_class() {
            return il2cpp::get_class<app::Version__Class>(type_info(), "System", "Version");
        }
        inline app::Version* create() {
            return il2cpp::create_object<app::Version>(get_class());
        }
    } // namespace Version
} // namespace app::classes::types
