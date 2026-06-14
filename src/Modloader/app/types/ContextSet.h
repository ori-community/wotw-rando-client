#pragma once
#include <Modloader/app/structs/ContextSet.h>
#include <Modloader/app/structs/ContextSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextSet {
        inline app::ContextSet__Class** type_info() {
            static app::ContextSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContextSet__Class**)(modloader::win::memory::resolve_rva(0x04708F30));
            }
            return cache;
        }
        inline app::ContextSet__Class* get_class() {
            return il2cpp::get_class<app::ContextSet__Class>(type_info(), "", "ContextSet");
        }
        inline app::ContextSet* create() {
            return il2cpp::create_object<app::ContextSet>(get_class());
        }
    } // namespace ContextSet
} // namespace app::classes::types
