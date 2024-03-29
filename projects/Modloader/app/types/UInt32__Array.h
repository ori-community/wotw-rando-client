#pragma once
#include <Modloader/app/structs/UInt32__Array.h>
#include <Modloader/app/structs/UInt32__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UInt32__Array {
        inline app::UInt32__Array__Class** type_info() {
            static app::UInt32__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UInt32__Array__Class**)(modloader::win::memory::resolve_rva(0x04734C60));
            }
            return cache;
        }
        inline app::UInt32__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt32__Array__Class>(type_info(), "System", "UInt32[]");
        }
        inline app::UInt32__Array* create() {
            return il2cpp::create_object<app::UInt32__Array>(get_class());
        }
    } // namespace UInt32__Array
} // namespace app::classes::types
