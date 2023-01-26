#pragma once
#include <Modloader/app/structs/PersistentCallGroup.h>
#include <Modloader/app/structs/PersistentCallGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersistentCallGroup {
        inline app::PersistentCallGroup__Class** type_info() {
            static app::PersistentCallGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PersistentCallGroup__Class**)(modloader::win::memory::resolve_rva(0x04744710));
            }
            return cache;
        }
        inline app::PersistentCallGroup__Class* get_class() {
            return il2cpp::get_class<app::PersistentCallGroup__Class>(type_info(), "UnityEngine.Events", "PersistentCallGroup");
        }
        inline app::PersistentCallGroup* create() {
            return il2cpp::create_object<app::PersistentCallGroup>(get_class());
        }
    } // namespace PersistentCallGroup
} // namespace app::classes::types
