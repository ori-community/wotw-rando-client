#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameObjectCollectionBase {
        inline app::NameObjectCollectionBase__Class** type_info = (app::NameObjectCollectionBase__Class**)(modloader::win::memory::resolve_rva(0x0478A8F0));
        inline app::NameObjectCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::NameObjectCollectionBase__Class>(type_info, "System.Collections.Specialized", "NameObjectCollectionBase");
        }
        inline app::NameObjectCollectionBase* create() {
            return il2cpp::create_object<app::NameObjectCollectionBase>(get_class());
        }
    } // namespace NameObjectCollectionBase
} // namespace app::classes::types
