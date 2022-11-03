#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace fsCyclicReferenceManager {
        inline app::fsCyclicReferenceManager__Class** type_info = (app::fsCyclicReferenceManager__Class**)(modloader::win::memory::resolve_rva(0x04772B40));
        inline app::fsCyclicReferenceManager__Class* get_class() {
            return il2cpp::get_class<app::fsCyclicReferenceManager__Class>(type_info, "FullSerializer.Internal", "fsCyclicReferenceManager");
        }
        inline app::fsCyclicReferenceManager* create() {
            return il2cpp::create_object<app::fsCyclicReferenceManager>(get_class());
        }
    } // namespace fsCyclicReferenceManager
} // namespace app::classes::types
