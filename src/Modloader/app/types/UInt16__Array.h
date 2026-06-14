#pragma once
#include <Modloader/app/structs/UInt16__Array.h>
#include <Modloader/app/structs/UInt16__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt16__Array {
        inline app::UInt16__Array__Class** type_info() {
            static app::UInt16__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt16__Array__Class**)(modloader::win::memory::resolve_rva(0x0478D768));
            }
            return cache;
        }
        inline app::UInt16__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt16__Array__Class>(type_info(), "System", "UInt16[]");
        }
        inline app::UInt16__Array* create() {
            return il2cpp::create_object<app::UInt16__Array>(get_class());
        }
    } // namespace UInt16__Array
} // namespace app::classes::types
