#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectionHelper__Class.h>
#include <Modloader/app/structs/ReflectionHelper.h>

namespace app::classes::types {
    namespace ReflectionHelper {
        inline app::ReflectionHelper__Class** type_info = (app::ReflectionHelper__Class**)(modloader::win::memory::resolve_rva(0x04748670));
        inline app::ReflectionHelper__Class* get_class() {
            return il2cpp::get_class<app::ReflectionHelper__Class>(type_info, "System.Xml.Serialization", "ReflectionHelper");
        }
        inline app::ReflectionHelper* create() {
            return il2cpp::create_object<app::ReflectionHelper>(get_class());
        }
    } // namespace ReflectionHelper
} // namespace app::classes::types
