#pragma once
#include <Modloader/app/structs/ScenesManagerContext.h>
#include <Modloader/app/structs/ScenesManagerContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerContext {
        inline app::ScenesManagerContext__Class** type_info() {
            static app::ScenesManagerContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScenesManagerContext__Class**)(modloader::win::memory::resolve_rva(0x0473CCF0));
            }
            return cache;
        }
        inline app::ScenesManagerContext__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerContext__Class>(type_info(), "", "ScenesManagerContext");
        }
        inline app::ScenesManagerContext* create() {
            return il2cpp::create_object<app::ScenesManagerContext>(get_class());
        }
    } // namespace ScenesManagerContext
} // namespace app::classes::types
