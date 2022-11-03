#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinCinematic {
        inline app::SeinCinematic__Class** type_info = (app::SeinCinematic__Class**)(modloader::win::memory::resolve_rva(0x0476EFC8));
        inline app::SeinCinematic__Class* get_class() {
            return il2cpp::get_class<app::SeinCinematic__Class>(type_info, "", "SeinCinematic");
        }
        inline app::SeinCinematic* create() {
            return il2cpp::create_object<app::SeinCinematic>(get_class());
        }
    } // namespace SeinCinematic
} // namespace app::classes::types
