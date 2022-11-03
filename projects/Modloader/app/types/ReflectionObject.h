#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionObject {
        inline app::ReflectionObject__Class** type_info = (app::ReflectionObject__Class**)(modloader::win::memory::resolve_rva(0x0473C570));
        inline app::ReflectionObject__Class* get_class() {
            return il2cpp::get_class<app::ReflectionObject__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionObject");
        }
        inline app::ReflectionObject* create() {
            return il2cpp::create_object<app::ReflectionObject>(get_class());
        }
    } // namespace ReflectionObject
} // namespace app::classes::types
