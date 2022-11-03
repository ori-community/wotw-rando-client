#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateCollection {
        inline app::UberStateCollection__Class** type_info = (app::UberStateCollection__Class**)(modloader::win::memory::resolve_rva(0x04706B28));
        inline app::UberStateCollection__Class* get_class() {
            return il2cpp::get_class<app::UberStateCollection__Class>(type_info, "Moon", "UberStateCollection");
        }
        inline app::UberStateCollection* create() {
            return il2cpp::create_object<app::UberStateCollection>(get_class());
        }
    } // namespace UberStateCollection
} // namespace app::classes::types
