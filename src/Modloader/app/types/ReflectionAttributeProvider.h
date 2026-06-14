#pragma once
#include <Modloader/app/structs/ReflectionAttributeProvider.h>
#include <Modloader/app/structs/ReflectionAttributeProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionAttributeProvider {
        inline app::ReflectionAttributeProvider__Class** type_info() {
            static app::ReflectionAttributeProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionAttributeProvider__Class**)(modloader::win::memory::resolve_rva(0x0470ADB8));
            }
            return cache;
        }
        inline app::ReflectionAttributeProvider__Class* get_class() {
            return il2cpp::get_class<app::ReflectionAttributeProvider__Class>(type_info(), "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
        }
        inline app::ReflectionAttributeProvider* create() {
            return il2cpp::create_object<app::ReflectionAttributeProvider>(get_class());
        }
    } // namespace ReflectionAttributeProvider
} // namespace app::classes::types
