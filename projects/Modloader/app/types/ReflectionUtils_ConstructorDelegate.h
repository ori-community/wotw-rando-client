#pragma once
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Array.h>
#include <Modloader/app/structs/ReflectionUtils_ConstructorDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_ConstructorDelegate {
        inline app::ReflectionUtils_ConstructorDelegate__Class** type_info() {
            static app::ReflectionUtils_ConstructorDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionUtils_ConstructorDelegate__Class**)(modloader::win::memory::resolve_rva(0x0472B570));
            }
            return cache;
        }
        inline app::ReflectionUtils_ConstructorDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::ReflectionUtils_ConstructorDelegate__Class>(type_info(), "PlayFab.Json", "ReflectionUtils", "ConstructorDelegate");
        }
        inline app::ReflectionUtils_ConstructorDelegate* create() {
            return il2cpp::create_object<app::ReflectionUtils_ConstructorDelegate>(get_class());
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create_array(int size) {
            return il2cpp::array_new<app::ReflectionUtils_ConstructorDelegate__Array>(get_class(), size);
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create_array(const std::vector<app::ReflectionUtils_ConstructorDelegate*>& items) {
            return il2cpp::array_new<app::ReflectionUtils_ConstructorDelegate__Array>(get_class(), items);
        }
    } // namespace ReflectionUtils_ConstructorDelegate
} // namespace app::classes::types
