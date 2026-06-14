#pragma once
#include <Modloader/app/structs/Registry.h>
#include <Modloader/app/structs/Registry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Registry {
        inline app::Registry__Class** type_info() {
            static app::Registry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Registry__Class**)(modloader::win::memory::resolve_rva(0x04791318));
            }
            return cache;
        }
        inline app::Registry__Class* get_class() {
            return il2cpp::get_class<app::Registry__Class>(type_info(), "Microsoft.Win32", "Registry");
        }
        inline app::Registry* create() {
            return il2cpp::create_object<app::Registry>(get_class());
        }
    } // namespace Registry
} // namespace app::classes::types
