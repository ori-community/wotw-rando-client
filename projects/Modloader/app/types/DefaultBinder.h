#pragma once
#include <Modloader/app/structs/DefaultBinder.h>
#include <Modloader/app/structs/DefaultBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DefaultBinder {
        inline app::DefaultBinder__Class** type_info() {
            static app::DefaultBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DefaultBinder__Class**)(modloader::win::memory::resolve_rva(0x04703F50));
            }
            return cache;
        }
        inline app::DefaultBinder__Class* get_class() {
            return il2cpp::get_class<app::DefaultBinder__Class>(type_info(), "System", "DefaultBinder");
        }
        inline app::DefaultBinder* create() {
            return il2cpp::create_object<app::DefaultBinder>(get_class());
        }
    } // namespace DefaultBinder
} // namespace app::classes::types
