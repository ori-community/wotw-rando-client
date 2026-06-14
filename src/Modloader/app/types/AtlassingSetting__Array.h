#pragma once
#include <Modloader/app/structs/AtlassingSetting__Array.h>
#include <Modloader/app/structs/AtlassingSetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlassingSetting__Array {
        inline app::AtlassingSetting__Array__Class** type_info() {
            static app::AtlassingSetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AtlassingSetting__Array__Class**)(modloader::win::memory::resolve_rva(0x0472EE08));
            }
            return cache;
        }
        inline app::AtlassingSetting__Array__Class* get_class() {
            return il2cpp::get_class<app::AtlassingSetting__Array__Class>(type_info(), "", "AtlassingSetting[]");
        }
        inline app::AtlassingSetting__Array* create() {
            return il2cpp::create_object<app::AtlassingSetting__Array>(get_class());
        }
    } // namespace AtlassingSetting__Array
} // namespace app::classes::types
