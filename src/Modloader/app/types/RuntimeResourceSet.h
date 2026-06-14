#pragma once
#include <Modloader/app/structs/RuntimeResourceSet.h>
#include <Modloader/app/structs/RuntimeResourceSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeResourceSet {
        inline app::RuntimeResourceSet__Class** type_info() {
            static app::RuntimeResourceSet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeResourceSet__Class**)(modloader::win::memory::resolve_rva(0x04764260));
            }
            return cache;
        }
        inline app::RuntimeResourceSet__Class* get_class() {
            return il2cpp::get_class<app::RuntimeResourceSet__Class>(type_info(), "System.Resources", "RuntimeResourceSet");
        }
        inline app::RuntimeResourceSet* create() {
            return il2cpp::create_object<app::RuntimeResourceSet>(get_class());
        }
    } // namespace RuntimeResourceSet
} // namespace app::classes::types
