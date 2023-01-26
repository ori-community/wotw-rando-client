#pragma once
#include <Modloader/app/structs/Vector4Ser__Array.h>
#include <Modloader/app/structs/Vector4Ser__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector4Ser__Array {
        inline app::Vector4Ser__Array__Class** type_info() {
            static app::Vector4Ser__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Vector4Ser__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Vector4Ser__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector4Ser__Array__Class>(type_info(), "", "Vector4Ser[]");
        }
        inline app::Vector4Ser__Array* create() {
            return il2cpp::create_object<app::Vector4Ser__Array>(get_class());
        }
    } // namespace Vector4Ser__Array
} // namespace app::classes::types
