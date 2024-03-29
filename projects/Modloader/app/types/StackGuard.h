#pragma once
#include <Modloader/app/structs/StackGuard.h>
#include <Modloader/app/structs/StackGuard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackGuard {
        inline app::StackGuard__Class** type_info() {
            static app::StackGuard__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StackGuard__Class**)(modloader::win::memory::resolve_rva(0x04752EE0));
            }
            return cache;
        }
        inline app::StackGuard__Class* get_class() {
            return il2cpp::get_class<app::StackGuard__Class>(type_info(), "System.Threading.Tasks", "StackGuard");
        }
        inline app::StackGuard* create() {
            return il2cpp::create_object<app::StackGuard>(get_class());
        }
    } // namespace StackGuard
} // namespace app::classes::types
