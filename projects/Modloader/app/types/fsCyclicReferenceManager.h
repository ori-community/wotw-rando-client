#pragma once
#include <Modloader/app/structs/fsCyclicReferenceManager.h>
#include <Modloader/app/structs/fsCyclicReferenceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace fsCyclicReferenceManager {
        inline app::fsCyclicReferenceManager__Class** type_info() {
            static app::fsCyclicReferenceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::fsCyclicReferenceManager__Class**)(modloader::win::memory::resolve_rva(0x04772B40));
            }
            return cache;
        }
        inline app::fsCyclicReferenceManager__Class* get_class() {
            return il2cpp::get_class<app::fsCyclicReferenceManager__Class>(type_info(), "FullSerializer.Internal", "fsCyclicReferenceManager");
        }
        inline app::fsCyclicReferenceManager* create() {
            return il2cpp::create_object<app::fsCyclicReferenceManager>(get_class());
        }
    } // namespace fsCyclicReferenceManager
} // namespace app::classes::types
