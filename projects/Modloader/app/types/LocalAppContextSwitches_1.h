#pragma once
#include <Modloader/app/structs/LocalAppContextSwitches_1.h>
#include <Modloader/app/structs/LocalAppContextSwitches_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalAppContextSwitches_1 {
        inline app::LocalAppContextSwitches_1__Class** type_info() {
            static app::LocalAppContextSwitches_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocalAppContextSwitches_1__Class**)(modloader::win::memory::resolve_rva(0x04767FF8));
            }
            return cache;
        }
        inline app::LocalAppContextSwitches_1__Class* get_class() {
            return il2cpp::get_class<app::LocalAppContextSwitches_1__Class>(type_info(), "System", "LocalAppContextSwitches");
        }
        inline app::LocalAppContextSwitches_1* create() {
            return il2cpp::create_object<app::LocalAppContextSwitches_1>(get_class());
        }
    } // namespace LocalAppContextSwitches_1
} // namespace app::classes::types
