#pragma once
#include <Modloader/app/structs/PointerSpec.h>
#include <Modloader/app/structs/PointerSpec__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerSpec {
        inline app::PointerSpec__Class** type_info() {
            static app::PointerSpec__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PointerSpec__Class**)(modloader::win::memory::resolve_rva(0x04712750));
            }
            return cache;
        }
        inline app::PointerSpec__Class* get_class() {
            return il2cpp::get_class<app::PointerSpec__Class>(type_info(), "System", "PointerSpec");
        }
        inline app::PointerSpec* create() {
            return il2cpp::create_object<app::PointerSpec>(get_class());
        }
    } // namespace PointerSpec
} // namespace app::classes::types
