#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnvTopology {
        inline app::EnvTopology__Class** type_info = (app::EnvTopology__Class**)(modloader::win::memory::resolve_rva(0x0477A5E0));
        inline app::EnvTopology__Class* get_class() {
            return il2cpp::get_class<app::EnvTopology__Class>(type_info, "", "EnvTopology");
        }
        inline app::EnvTopology* create() {
            return il2cpp::create_object<app::EnvTopology>(get_class());
        }
    } // namespace EnvTopology
} // namespace app::classes::types
