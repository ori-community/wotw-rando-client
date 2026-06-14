#pragma once
#include <Modloader/app/structs/Vector3Ser__Array.h>
#include <Modloader/app/structs/Vector3Ser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector3Ser__Array {
        inline app::Vector3Ser__Array__Class** type_info() {
            static app::Vector3Ser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vector3Ser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vector3Ser__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector3Ser__Array__Class>(type_info(), "", "Vector3Ser[]");
        }
        inline app::Vector3Ser__Array* create() {
            return il2cpp::create_object<app::Vector3Ser__Array>(get_class());
        }
    } // namespace Vector3Ser__Array
} // namespace app::classes::types
