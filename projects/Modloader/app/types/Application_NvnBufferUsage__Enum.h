#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Class.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum__Array.h>

namespace app::classes::types {
    namespace Application_NvnBufferUsage__Enum {
        inline app::Application_NvnBufferUsage__Enum__Class** type_info = (app::Application_NvnBufferUsage__Enum__Class**)(modloader::win::memory::resolve_rva(0x047070E8));
        inline app::Application_NvnBufferUsage__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Application_NvnBufferUsage__Enum__Class>(type_info, "UnityEngine", "Application", "NvnBufferUsage");
        }
        inline app::Application_NvnBufferUsage__Enum* create() {
            return il2cpp::create_object<app::Application_NvnBufferUsage__Enum>(get_class());
        }
        inline app::Application_NvnBufferUsage__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Application_NvnBufferUsage__Enum__Array>(get_class(), size);
        }
        inline app::Application_NvnBufferUsage__Enum__Array* create_array(const std::vector<app::Application_NvnBufferUsage__Enum*>& items) {
            return il2cpp::array_new<app::Application_NvnBufferUsage__Enum__Array>(get_class(), items);
        }
    } // namespace Application_NvnBufferUsage__Enum
} // namespace app::classes::types
