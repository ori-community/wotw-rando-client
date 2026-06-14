#pragma once
#include <Modloader/app/structs/MulticastNotSupportedException.h>
#include <Modloader/app/structs/MulticastNotSupportedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MulticastNotSupportedException {
        inline app::MulticastNotSupportedException__Class** type_info() {
            static app::MulticastNotSupportedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MulticastNotSupportedException__Class**)(modloader::win::memory::resolve_rva(0x04750AA0));
            }
            return cache;
        }
        inline app::MulticastNotSupportedException__Class* get_class() {
            return il2cpp::get_class<app::MulticastNotSupportedException__Class>(type_info(), "System", "MulticastNotSupportedException");
        }
        inline app::MulticastNotSupportedException* create() {
            return il2cpp::create_object<app::MulticastNotSupportedException>(get_class());
        }
    } // namespace MulticastNotSupportedException
} // namespace app::classes::types
