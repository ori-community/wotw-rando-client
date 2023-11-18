#pragma once
#include <Modloader/app/structs/ArraySpec.h>
#include <Modloader/app/structs/ArraySpec__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArraySpec {
        inline app::ArraySpec__Class** type_info() {
            static app::ArraySpec__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArraySpec__Class**)(modloader::win::memory::resolve_rva(0x047982F8));
            }
            return cache;
        }
        inline app::ArraySpec__Class* get_class() {
            return il2cpp::get_class<app::ArraySpec__Class>(type_info(), "System", "ArraySpec");
        }
        inline app::ArraySpec* create() {
            return il2cpp::create_object<app::ArraySpec>(get_class());
        }
    } // namespace ArraySpec
} // namespace app::classes::types
