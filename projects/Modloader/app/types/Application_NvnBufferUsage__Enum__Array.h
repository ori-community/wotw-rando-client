#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Array__Class.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Array.h>

namespace app::classes::types {
    namespace Application_NvnBufferUsage__Enum__Array {
        inline app::Application_NvnBufferUsage__Enum__Array__Class** type_info = (app::Application_NvnBufferUsage__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04781ED8));
        inline app::Application_NvnBufferUsage__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Application_NvnBufferUsage__Enum__Array__Class>(type_info, "UnityEngine", "Application+NvnBufferUsage[]");
        }
        inline app::Application_NvnBufferUsage__Enum__Array* create() {
            return il2cpp::create_object<app::Application_NvnBufferUsage__Enum__Array>(get_class());
        }
    } // namespace Application_NvnBufferUsage__Enum__Array
} // namespace app::classes::types
