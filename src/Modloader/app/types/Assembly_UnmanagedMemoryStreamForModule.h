#pragma once
#include <Modloader/app/structs/Assembly_UnmanagedMemoryStreamForModule.h>
#include <Modloader/app/structs/Assembly_UnmanagedMemoryStreamForModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Assembly_UnmanagedMemoryStreamForModule {
        inline app::Assembly_UnmanagedMemoryStreamForModule__Class** type_info() {
            static app::Assembly_UnmanagedMemoryStreamForModule__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Assembly_UnmanagedMemoryStreamForModule__Class**)(modloader::win::memory::resolve_rva(0x04709C98));
            }
            return cache;
        }
        inline app::Assembly_UnmanagedMemoryStreamForModule__Class* get_class() {
            return il2cpp::get_nested_class<app::Assembly_UnmanagedMemoryStreamForModule__Class>(type_info(), "System.Reflection", "Assembly", "UnmanagedMemoryStreamForModule");
        }
        inline app::Assembly_UnmanagedMemoryStreamForModule* create() {
            return il2cpp::create_object<app::Assembly_UnmanagedMemoryStreamForModule>(get_class());
        }
    } // namespace Assembly_UnmanagedMemoryStreamForModule
} // namespace app::classes::types
