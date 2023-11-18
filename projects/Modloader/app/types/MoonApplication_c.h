#pragma once
#include <Modloader/app/structs/MoonApplication_c.h>
#include <Modloader/app/structs/MoonApplication_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonApplication_c {
        inline app::MoonApplication_c__Class** type_info() {
            static app::MoonApplication_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonApplication_c__Class**)(modloader::win::memory::resolve_rva(0x0474D240));
            }
            return cache;
        }
        inline app::MoonApplication_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonApplication_c__Class>(type_info(), "", "MoonApplication", "<>c");
        }
        inline app::MoonApplication_c* create() {
            return il2cpp::create_object<app::MoonApplication_c>(get_class());
        }
    } // namespace MoonApplication_c
} // namespace app::classes::types
