#pragma once
#include <Modloader/app/structs/ICustomTypeDescriptor.h>
#include <Modloader/app/structs/ICustomTypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICustomTypeDescriptor {
        inline app::ICustomTypeDescriptor__Class** type_info() {
            static app::ICustomTypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ICustomTypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477C5F0));
            }
            return cache;
        }
        inline app::ICustomTypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ICustomTypeDescriptor__Class>(type_info(), "System.ComponentModel", "ICustomTypeDescriptor");
        }
    } // namespace ICustomTypeDescriptor
} // namespace app::classes::types
