#pragma once
#include <Modloader/app/structs/MoonDriver.h>
#include <Modloader/app/structs/MoonDriver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonDriver {
        inline app::MoonDriver__Class** type_info() {
            static app::MoonDriver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonDriver__Class**)(modloader::win::memory::resolve_rva(0x0471F8D8));
            }
            return cache;
        }
        inline app::MoonDriver__Class* get_class() {
            return il2cpp::get_class<app::MoonDriver__Class>(type_info(), "Moon", "MoonDriver");
        }
        inline app::MoonDriver* create() {
            return il2cpp::create_object<app::MoonDriver>(get_class());
        }
    } // namespace MoonDriver
} // namespace app::classes::types
