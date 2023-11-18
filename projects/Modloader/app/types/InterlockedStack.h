#pragma once
#include <Modloader/app/structs/InterlockedStack.h>
#include <Modloader/app/structs/InterlockedStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterlockedStack {
        inline app::InterlockedStack__Class** type_info() {
            static app::InterlockedStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterlockedStack__Class**)(modloader::win::memory::resolve_rva(0x04761390));
            }
            return cache;
        }
        inline app::InterlockedStack__Class* get_class() {
            return il2cpp::get_class<app::InterlockedStack__Class>(type_info(), "System.Net", "InterlockedStack");
        }
        inline app::InterlockedStack* create() {
            return il2cpp::create_object<app::InterlockedStack>(get_class());
        }
    } // namespace InterlockedStack
} // namespace app::classes::types
