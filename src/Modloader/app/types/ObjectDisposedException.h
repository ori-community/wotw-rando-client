#pragma once
#include <Modloader/app/structs/ObjectDisposedException.h>
#include <Modloader/app/structs/ObjectDisposedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ObjectDisposedException {
        inline app::ObjectDisposedException__Class** type_info() {
            static app::ObjectDisposedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ObjectDisposedException__Class**)(modloader::win::memory::resolve_rva(0x047110A0));
            }
            return cache;
        }
        inline app::ObjectDisposedException__Class* get_class() {
            return il2cpp::get_class<app::ObjectDisposedException__Class>(type_info(), "System", "ObjectDisposedException");
        }
        inline app::ObjectDisposedException* create() {
            return il2cpp::create_object<app::ObjectDisposedException>(get_class());
        }
    } // namespace ObjectDisposedException
} // namespace app::classes::types
