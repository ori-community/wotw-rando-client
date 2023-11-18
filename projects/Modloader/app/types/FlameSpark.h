#pragma once
#include <Modloader/app/structs/FlameSpark.h>
#include <Modloader/app/structs/FlameSpark__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FlameSpark {
        inline app::FlameSpark__Class** type_info() {
            static app::FlameSpark__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FlameSpark__Class**)(modloader::win::memory::resolve_rva(0x0475CA90));
            }
            return cache;
        }
        inline app::FlameSpark__Class* get_class() {
            return il2cpp::get_class<app::FlameSpark__Class>(type_info(), "Moon", "FlameSpark");
        }
        inline app::FlameSpark* create() {
            return il2cpp::create_object<app::FlameSpark>(get_class());
        }
    } // namespace FlameSpark
} // namespace app::classes::types
