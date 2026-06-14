#pragma once
#include <Modloader/app/structs/Texture__Array.h>
#include <Modloader/app/structs/Texture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture__Array {
        inline app::Texture__Array__Class** type_info() {
            static app::Texture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Texture__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Texture__Array__Class* get_class() {
            return il2cpp::get_class<app::Texture__Array__Class>(type_info(), "UnityEngine", "Texture[]");
        }
        inline app::Texture__Array* create() {
            return il2cpp::create_object<app::Texture__Array>(get_class());
        }
    } // namespace Texture__Array
} // namespace app::classes::types
