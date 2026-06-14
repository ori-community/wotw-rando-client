#pragma once
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Array.h>
#include <Modloader/app/structs/ReflectionUtils_GetDelegate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_GetDelegate__Array {
        inline app::ReflectionUtils_GetDelegate__Array__Class** type_info() {
            static app::ReflectionUtils_GetDelegate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReflectionUtils_GetDelegate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReflectionUtils_GetDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils_GetDelegate__Array__Class>(type_info(), "PlayFab.Json", "ReflectionUtils+GetDelegate[]");
        }
        inline app::ReflectionUtils_GetDelegate__Array* create() {
            return il2cpp::create_object<app::ReflectionUtils_GetDelegate__Array>(get_class());
        }
    } // namespace ReflectionUtils_GetDelegate__Array
} // namespace app::classes::types
