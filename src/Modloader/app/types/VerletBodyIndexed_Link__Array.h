#pragma once
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array.h>
#include <Modloader/app/structs/VerletBodyIndexed_Link__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerletBodyIndexed_Link__Array {
        inline app::VerletBodyIndexed_Link__Array__Class** type_info() {
            static app::VerletBodyIndexed_Link__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerletBodyIndexed_Link__Array__Class**)(modloader::win::memory::resolve_rva(0x0476DFC0));
            }
            return cache;
        }
        inline app::VerletBodyIndexed_Link__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBodyIndexed_Link__Array__Class>(type_info(), "Moon", "VerletBodyIndexed+Link[]");
        }
        inline app::VerletBodyIndexed_Link__Array* create() {
            return il2cpp::create_object<app::VerletBodyIndexed_Link__Array>(get_class());
        }
    } // namespace VerletBodyIndexed_Link__Array
} // namespace app::classes::types
