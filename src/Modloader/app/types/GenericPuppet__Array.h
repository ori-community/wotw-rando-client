#pragma once
#include <Modloader/app/structs/GenericPuppet__Array.h>
#include <Modloader/app/structs/GenericPuppet__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPuppet__Array {
        inline app::GenericPuppet__Array__Class** type_info() {
            static app::GenericPuppet__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GenericPuppet__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GenericPuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppet__Array__Class>(type_info(), "", "GenericPuppet[]");
        }
        inline app::GenericPuppet__Array* create() {
            return il2cpp::create_object<app::GenericPuppet__Array>(get_class());
        }
    } // namespace GenericPuppet__Array
} // namespace app::classes::types
