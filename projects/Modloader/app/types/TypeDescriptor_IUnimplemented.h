#pragma once
#include <Modloader/app/structs/TypeDescriptor_IUnimplemented.h>
#include <Modloader/app/structs/TypeDescriptor_IUnimplemented__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor_IUnimplemented {
        inline app::TypeDescriptor_IUnimplemented__Class** type_info() {
            static app::TypeDescriptor_IUnimplemented__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor_IUnimplemented__Class**)(modloader::win::memory::resolve_rva(0x04717AC0));
            }
            return cache;
        }
        inline app::TypeDescriptor_IUnimplemented__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeDescriptor_IUnimplemented__Class>(type_info(), "System.ComponentModel", "TypeDescriptor", "IUnimplemented");
        }
    } // namespace TypeDescriptor_IUnimplemented
} // namespace app::classes::types
