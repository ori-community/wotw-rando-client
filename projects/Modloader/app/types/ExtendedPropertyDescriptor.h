#pragma once
#include <Modloader/app/structs/ExtendedPropertyDescriptor.h>
#include <Modloader/app/structs/ExtendedPropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedPropertyDescriptor {
        inline app::ExtendedPropertyDescriptor__Class** type_info() {
            static app::ExtendedPropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtendedPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04729BC0));
            }
            return cache;
        }
        inline app::ExtendedPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::ExtendedPropertyDescriptor__Class>(type_info(), "System.ComponentModel", "ExtendedPropertyDescriptor");
        }
        inline app::ExtendedPropertyDescriptor* create() {
            return il2cpp::create_object<app::ExtendedPropertyDescriptor>(get_class());
        }
    } // namespace ExtendedPropertyDescriptor
} // namespace app::classes::types
