#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RobustPredicates {
        inline app::RobustPredicates__Class** type_info = (app::RobustPredicates__Class**)(modloader::win::memory::resolve_rva(0x04761358));
        inline app::RobustPredicates__Class* get_class() {
            return il2cpp::get_class<app::RobustPredicates__Class>(type_info, "TriangleNet", "RobustPredicates");
        }
        inline app::RobustPredicates* create() {
            return il2cpp::create_object<app::RobustPredicates>(get_class());
        }
    } // namespace RobustPredicates
} // namespace app::classes::types
