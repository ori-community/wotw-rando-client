#pragma once
#include <Modloader/app/structs/Flammable_c.h>
#include <Modloader/app/structs/Flammable_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Flammable_c {
        inline app::Flammable_c__Class** type_info() {
            static app::Flammable_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Flammable_c__Class**)(modloader::win::memory::resolve_rva(0x0475A148));
            }
            return cache;
        }
        inline app::Flammable_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Flammable_c__Class>(type_info(), "Moon", "Flammable", "<>c");
        }
        inline app::Flammable_c* create() {
            return il2cpp::create_object<app::Flammable_c>(get_class());
        }
    } // namespace Flammable_c
} // namespace app::classes::types
