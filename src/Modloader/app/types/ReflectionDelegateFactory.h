#pragma once
#include <Modloader/app/structs/ReflectionDelegateFactory.h>
#include <Modloader/app/structs/ReflectionDelegateFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionDelegateFactory {
        inline app::ReflectionDelegateFactory__Class** type_info() {
            static app::ReflectionDelegateFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReflectionDelegateFactory__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::ReflectionDelegateFactory__Class>(type_info(), "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
        }
        inline app::ReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::ReflectionDelegateFactory>(get_class());
        }
    } // namespace ReflectionDelegateFactory
} // namespace app::classes::types
