#pragma once
#include <Modloader/app/structs/GenericStack.h>
#include <Modloader/app/structs/GenericStack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericStack {
        inline app::GenericStack__Class** type_info() {
            static app::GenericStack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericStack__Class**)(modloader::win::memory::resolve_rva(0x04765120));
            }
            return cache;
        }
        inline app::GenericStack__Class* get_class() {
            return il2cpp::get_class<app::GenericStack__Class>(type_info(), "UnityEngineInternal", "GenericStack");
        }
        inline app::GenericStack* create() {
            return il2cpp::create_object<app::GenericStack>(get_class());
        }
    } // namespace GenericStack
} // namespace app::classes::types
