#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReflectEventDescriptor__Class.h>
#include <Modloader/app/structs/ReflectEventDescriptor.h>

namespace app::classes::types {
    namespace ReflectEventDescriptor {
        inline app::ReflectEventDescriptor__Class** type_info = (app::ReflectEventDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04701E58));
        inline app::ReflectEventDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ReflectEventDescriptor__Class>(type_info, "System.ComponentModel", "ReflectEventDescriptor");
        }
        inline app::ReflectEventDescriptor* create() {
            return il2cpp::create_object<app::ReflectEventDescriptor>(get_class());
        }
    } // namespace ReflectEventDescriptor
} // namespace app::classes::types
