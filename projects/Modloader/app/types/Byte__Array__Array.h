#pragma once
#include <Modloader/app/structs/Byte__Array__Array.h>
#include <Modloader/app/structs/Byte__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Byte__Array__Array {
        inline app::Byte__Array__Array__Class** type_info() {
            static app::Byte__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Byte__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04728FD8));
            }
            return cache;
        }
        inline app::Byte__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Byte__Array__Array__Class>(type_info(), "System", "Byte[][]");
        }
        inline app::Byte__Array__Array* create() {
            return il2cpp::create_object<app::Byte__Array__Array>(get_class());
        }
    } // namespace Byte__Array__Array
} // namespace app::classes::types
