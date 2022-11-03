#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Random {
        inline app::Random__Class** type_info = (app::Random__Class**)(modloader::win::memory::resolve_rva(0x0476B6C0));
        inline app::Random__Class* get_class() {
            return il2cpp::get_class<app::Random__Class>(type_info, "System", "Random");
        }
        inline app::Random* create() {
            return il2cpp::create_object<app::Random>(get_class());
        }
    } // namespace Random
} // namespace app::classes::types
