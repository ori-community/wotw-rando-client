#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TypeDescriptor_IUnimplemented__Class.h>

namespace app::classes::types {
    namespace TypeDescriptor_IUnimplemented {
        inline app::TypeDescriptor_IUnimplemented__Class** type_info = (app::TypeDescriptor_IUnimplemented__Class**)(modloader::win::memory::resolve_rva(0x04717AC0));
        inline app::TypeDescriptor_IUnimplemented__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_IUnimplemented__Class>(type_info, "System.ComponentModel", "TypeDescriptor", "IUnimplemented");
        }
    } // namespace TypeDescriptor_IUnimplemented
} // namespace app::classes::types
