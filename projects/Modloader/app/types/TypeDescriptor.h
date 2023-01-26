#pragma once
#include <Modloader/app/structs/TypeDescriptor.h>
#include <Modloader/app/structs/TypeDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeDescriptor {
        inline app::TypeDescriptor__Class** type_info() {
            static app::TypeDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TypeDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04796688));
            }
            return cache;
        }
        inline app::TypeDescriptor__Class* get_class() {
            return il2cpp::get_class<app::TypeDescriptor__Class>(type_info(), "System.ComponentModel", "TypeDescriptor");
        }
        inline app::TypeDescriptor* create() {
            return il2cpp::create_object<app::TypeDescriptor>(get_class());
        }
    } // namespace TypeDescriptor
} // namespace app::classes::types
