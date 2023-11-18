#pragma once
#include <Modloader/app/structs/MoonApplication.h>
#include <Modloader/app/structs/MoonApplication__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonApplication {
        inline app::MoonApplication__Class** type_info() {
            static app::MoonApplication__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonApplication__Class**)(modloader::win::memory::resolve_rva(0x04747748));
            }
            return cache;
        }
        inline app::MoonApplication__Class* get_class() {
            return il2cpp::get_class<app::MoonApplication__Class>(type_info(), "", "MoonApplication");
        }
        inline app::MoonApplication* create() {
            return il2cpp::create_object<app::MoonApplication>(get_class());
        }
    } // namespace MoonApplication
} // namespace app::classes::types
