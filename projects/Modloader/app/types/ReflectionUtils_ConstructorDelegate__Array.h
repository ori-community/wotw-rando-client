#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Array__Class.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Array.h>

namespace app::classes::types {
    namespace ReflectionUtils_ConstructorDelegate__Array {
        namespace {
            inline app::ReflectionUtils_ConstructorDelegate__Array__Class* type_info_ref = nullptr;
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array__Class** type_info = &type_info_ref;
        inline app::ReflectionUtils_ConstructorDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils_ConstructorDelegate__Array__Class>(type_info, "PlayFab.Json", "ReflectionUtils+ConstructorDelegate[]");
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create() {
            return il2cpp::create_object<app::ReflectionUtils_ConstructorDelegate__Array>(get_class());
        }
    } // namespace ReflectionUtils_ConstructorDelegate__Array
} // namespace app::classes::types
