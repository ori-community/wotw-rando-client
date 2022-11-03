#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForceRefreshAnimatorContext {
        inline app::ForceRefreshAnimatorContext__Class** type_info = (app::ForceRefreshAnimatorContext__Class**)(modloader::win::memory::resolve_rva(0x0477EC70));
        inline app::ForceRefreshAnimatorContext__Class* get_class() {
            return il2cpp::get_class<app::ForceRefreshAnimatorContext__Class>(type_info, "Moon.Timeline", "ForceRefreshAnimatorContext");
        }
        inline app::ForceRefreshAnimatorContext* create() {
            return il2cpp::create_object<app::ForceRefreshAnimatorContext>(get_class());
        }
    } // namespace ForceRefreshAnimatorContext
} // namespace app::classes::types
