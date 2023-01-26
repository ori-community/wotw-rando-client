#pragma once
#include <Modloader/app/structs/KeySizes__Array.h>
#include <Modloader/app/structs/KeySizes__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeySizes__Array {
        inline app::KeySizes__Array__Class** type_info() {
            static app::KeySizes__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeySizes__Array__Class**)(modloader::win::memory::resolve_rva(0x0471A638));
            }
            return cache;
        }
        inline app::KeySizes__Array__Class* get_class() {
            return il2cpp::get_class<app::KeySizes__Array__Class>(type_info(), "System.Security.Cryptography", "KeySizes[]");
        }
        inline app::KeySizes__Array* create() {
            return il2cpp::create_object<app::KeySizes__Array>(get_class());
        }
    } // namespace KeySizes__Array
} // namespace app::classes::types
