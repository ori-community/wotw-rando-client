#pragma once
#include <Modloader/app/structs/ReflectionObject.h>
#include <Modloader/app/structs/ReflectionObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReflectionObject {
        inline app::ReflectionObject__Class** type_info() {
            static app::ReflectionObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReflectionObject__Class**)(modloader::win::memory::resolve_rva(0x0473C570));
            }
            return cache;
        }
        inline app::ReflectionObject__Class* get_class() {
            return il2cpp::get_class<app::ReflectionObject__Class>(type_info(), "Newtonsoft.Json.Utilities", "ReflectionObject");
        }
        inline app::ReflectionObject* create() {
            return il2cpp::create_object<app::ReflectionObject>(get_class());
        }
    } // namespace ReflectionObject
} // namespace app::classes::types
