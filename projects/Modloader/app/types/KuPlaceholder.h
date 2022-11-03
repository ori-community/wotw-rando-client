#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace KuPlaceholder {
        inline app::KuPlaceholder__Class** type_info = (app::KuPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0471E8D8));
        inline app::KuPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::KuPlaceholder__Class>(type_info, "", "KuPlaceholder");
        }
        inline app::KuPlaceholder* create() {
            return il2cpp::create_object<app::KuPlaceholder>(get_class());
        }
    } // namespace KuPlaceholder
} // namespace app::classes::types
