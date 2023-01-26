#pragma once
#include <Modloader/app/structs/Material__Array__Array.h>
#include <Modloader/app/structs/Material__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Material__Array__Array {
        inline app::Material__Array__Array__Class** type_info() {
            static app::Material__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Material__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04705C90));
            }
            return cache;
        }
        inline app::Material__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Material__Array__Array__Class>(type_info(), "UnityEngine", "Material[][]");
        }
        inline app::Material__Array__Array* create() {
            return il2cpp::create_object<app::Material__Array__Array>(get_class());
        }
    } // namespace Material__Array__Array
} // namespace app::classes::types
