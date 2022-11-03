#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FlameSpark {
        inline app::FlameSpark__Class** type_info = (app::FlameSpark__Class**)(modloader::win::memory::resolve_rva(0x0475CA90));
        inline app::FlameSpark__Class* get_class() {
            return il2cpp::get_class<app::FlameSpark__Class>(type_info, "Moon", "FlameSpark");
        }
        inline app::FlameSpark* create() {
            return il2cpp::create_object<app::FlameSpark>(get_class());
        }
    } // namespace FlameSpark
} // namespace app::classes::types
