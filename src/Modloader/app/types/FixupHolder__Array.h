#pragma once
#include <Modloader/app/structs/FixupHolder__Array.h>
#include <Modloader/app/structs/FixupHolder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixupHolder__Array {
        inline app::FixupHolder__Array__Class** type_info() {
            static app::FixupHolder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixupHolder__Array__Class**)(modloader::win::memory::resolve_rva(0x0478F2A8));
            }
            return cache;
        }
        inline app::FixupHolder__Array__Class* get_class() {
            return il2cpp::get_class<app::FixupHolder__Array__Class>(type_info(), "System.Runtime.Serialization", "FixupHolder[]");
        }
        inline app::FixupHolder__Array* create() {
            return il2cpp::create_object<app::FixupHolder__Array>(get_class());
        }
    } // namespace FixupHolder__Array
} // namespace app::classes::types
