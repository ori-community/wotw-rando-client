#pragma once
#include <Modloader/app/structs/ReflectionMember__Array.h>
#include <Modloader/app/structs/ReflectionMember__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionMember__Array {
        inline app::ReflectionMember__Array__Class** type_info() {
            static app::ReflectionMember__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReflectionMember__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReflectionMember__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectionMember__Array__Class>(type_info(), "Newtonsoft.Json.Utilities", "ReflectionMember[]");
        }
        inline app::ReflectionMember__Array* create() {
            return il2cpp::create_object<app::ReflectionMember__Array>(get_class());
        }
    } // namespace ReflectionMember__Array
} // namespace app::classes::types
