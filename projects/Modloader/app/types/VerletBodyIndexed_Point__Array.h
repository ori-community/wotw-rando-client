#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Point__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Point__Array {
        inline app::VerletBodyIndexed_Point__Array__Class** type_info() {
            static app::VerletBodyIndexed_Point__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletBodyIndexed_Point__Array__Class**)(modloader::win::memory::resolve_rva(0x04725B20));
            }
            return cache;
        }
        inline app::VerletBodyIndexed_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_Point__Array__Class>(type_info(), "Moon", "VerletBodyIndexed+Point[]");
        }
        inline app::VerletBodyIndexed_Point__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Point__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_Point__Array
} // namespace app::classes::types
