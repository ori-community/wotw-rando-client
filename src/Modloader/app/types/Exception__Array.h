#pragma once
#include <Modloader/app/structs/Exception__Array.h>
#include <Modloader/app/structs/Exception__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Exception__Array {
        inline app::Exception__Array__Class** type_info() {
            static app::Exception__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Exception__Array__Class**)(modloader::win::memory::resolve_rva(0x0475A090));
            }
            return cache;
        }
        inline app::Exception__Array__Class* get_class() {
            return il2cpp::get_class<app::Exception__Array__Class>(type_info(), "System", "Exception[]");
        }
        inline app::Exception__Array* create() {
            return il2cpp::create_object<app::Exception__Array>(get_class());
        }
    } // namespace Exception__Array
} // namespace app::classes::types
