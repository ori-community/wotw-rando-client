#pragma once
#include <Modloader/app/structs/Platform.h>
#include <Modloader/app/structs/Platform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Platform {
        inline app::Platform__Class** type_info() {
            static app::Platform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Platform__Class**)(modloader::win::memory::resolve_rva(0x0472A6C8));
            }
            return cache;
        }
        inline app::Platform__Class* get_class() {
            return il2cpp::get_class<app::Platform__Class>(type_info(), "System", "Platform");
        }
        inline app::Platform* create() {
            return il2cpp::create_object<app::Platform>(get_class());
        }
    } // namespace Platform
} // namespace app::classes::types
