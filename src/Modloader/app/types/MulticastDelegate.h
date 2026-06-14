#pragma once
#include <Modloader/app/structs/MulticastDelegate.h>
#include <Modloader/app/structs/MulticastDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulticastDelegate {
        inline app::MulticastDelegate__Class** type_info() {
            static app::MulticastDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulticastDelegate__Class**)(modloader::win::memory::resolve_rva(0x04799218));
            }
            return cache;
        }
        inline app::MulticastDelegate__Class* get_class() {
            return il2cpp::get_class<app::MulticastDelegate__Class>(type_info(), "System", "MulticastDelegate");
        }
        inline app::MulticastDelegate* create() {
            return il2cpp::create_object<app::MulticastDelegate>(get_class());
        }
    } // namespace MulticastDelegate
} // namespace app::classes::types
