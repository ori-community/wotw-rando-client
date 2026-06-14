#pragma once
#include <Modloader/app/structs/ReflectionTypeLoadException.h>
#include <Modloader/app/structs/ReflectionTypeLoadException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionTypeLoadException {
        inline app::ReflectionTypeLoadException__Class** type_info() {
            static app::ReflectionTypeLoadException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionTypeLoadException__Class**)(modloader::win::memory::resolve_rva(0x047851D8));
            }
            return cache;
        }
        inline app::ReflectionTypeLoadException__Class* get_class() {
            return il2cpp::get_class<app::ReflectionTypeLoadException__Class>(type_info(), "System.Reflection", "ReflectionTypeLoadException");
        }
        inline app::ReflectionTypeLoadException* create() {
            return il2cpp::create_object<app::ReflectionTypeLoadException>(get_class());
        }
    } // namespace ReflectionTypeLoadException
} // namespace app::classes::types
