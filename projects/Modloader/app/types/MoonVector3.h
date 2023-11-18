#pragma once
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/MoonVector3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonVector3 {
        inline app::MoonVector3__Class** type_info() {
            static app::MoonVector3__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonVector3__Class**)(modloader::win::memory::resolve_rva(0x04789FE8));
            }
            return cache;
        }
        inline app::MoonVector3__Class* get_class() {
            return il2cpp::get_class<app::MoonVector3__Class>(type_info(), "Moon", "MoonVector3");
        }
        inline app::MoonVector3* create() {
            return il2cpp::create_object<app::MoonVector3>(get_class());
        }
    } // namespace MoonVector3
} // namespace app::classes::types
