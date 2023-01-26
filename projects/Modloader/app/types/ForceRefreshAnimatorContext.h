#pragma once
#include <Modloader/app/structs/ForceRefreshAnimatorContext.h>
#include <Modloader/app/structs/ForceRefreshAnimatorContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceRefreshAnimatorContext {
        inline app::ForceRefreshAnimatorContext__Class** type_info() {
            static app::ForceRefreshAnimatorContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ForceRefreshAnimatorContext__Class**)(modloader::win::memory::resolve_rva(0x0477EC70));
            }
            return cache;
        }
        inline app::ForceRefreshAnimatorContext__Class* get_class() {
            return il2cpp::get_class<app::ForceRefreshAnimatorContext__Class>(type_info(), "Moon.Timeline", "ForceRefreshAnimatorContext");
        }
        inline app::ForceRefreshAnimatorContext* create() {
            return il2cpp::create_object<app::ForceRefreshAnimatorContext>(get_class());
        }
    } // namespace ForceRefreshAnimatorContext
} // namespace app::classes::types
