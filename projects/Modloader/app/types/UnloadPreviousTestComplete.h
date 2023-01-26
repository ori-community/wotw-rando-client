#pragma once
#include <Modloader/app/structs/UnloadPreviousTestComplete.h>
#include <Modloader/app/structs/UnloadPreviousTestComplete__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnloadPreviousTestComplete {
        inline app::UnloadPreviousTestComplete__Class** type_info() {
            static app::UnloadPreviousTestComplete__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnloadPreviousTestComplete__Class**)(modloader::win::memory::resolve_rva(0x047369C0));
            }
            return cache;
        }
        inline app::UnloadPreviousTestComplete__Class* get_class() {
            return il2cpp::get_class<app::UnloadPreviousTestComplete__Class>(type_info(), "", "UnloadPreviousTestComplete");
        }
        inline app::UnloadPreviousTestComplete* create() {
            return il2cpp::create_object<app::UnloadPreviousTestComplete>(get_class());
        }
    } // namespace UnloadPreviousTestComplete
} // namespace app::classes::types
