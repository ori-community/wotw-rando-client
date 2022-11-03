#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeResourceSet {
        inline app::RuntimeResourceSet__Class** type_info = (app::RuntimeResourceSet__Class**)(modloader::win::memory::resolve_rva(0x04764260));
        inline app::RuntimeResourceSet__Class* get_class() {
            return il2cpp::get_class<app::RuntimeResourceSet__Class>(type_info, "System.Resources", "RuntimeResourceSet");
        }
        inline app::RuntimeResourceSet* create() {
            return il2cpp::create_object<app::RuntimeResourceSet>(get_class());
        }
    } // namespace RuntimeResourceSet
} // namespace app::classes::types
