#pragma once
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Enum__Array {
        inline app::Enum__Array__Class** type_info() {
            static app::Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04782038));
            }
            return cache;
        }
        inline app::Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Enum__Array__Class>(type_info(), "System", "Enum[]");
        }
        inline app::Enum__Array* create() {
            return il2cpp::create_object<app::Enum__Array>(get_class());
        }
    } // namespace Enum__Array
} // namespace app::classes::types
