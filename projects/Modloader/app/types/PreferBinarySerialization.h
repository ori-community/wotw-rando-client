#pragma once
#include <Modloader/app/structs/PreferBinarySerialization.h>
#include <Modloader/app/structs/PreferBinarySerialization__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreferBinarySerialization {
        inline app::PreferBinarySerialization__Class** type_info() {
            static app::PreferBinarySerialization__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreferBinarySerialization__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreferBinarySerialization__Class* get_class() {
            return il2cpp::get_class<app::PreferBinarySerialization__Class>(type_info(), "UnityEngine", "PreferBinarySerialization");
        }
        inline app::PreferBinarySerialization* create() {
            return il2cpp::create_object<app::PreferBinarySerialization>(get_class());
        }
    } // namespace PreferBinarySerialization
} // namespace app::classes::types
