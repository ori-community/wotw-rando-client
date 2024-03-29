#pragma once
#include <Modloader/app/structs/XElementValuePropertyDescriptor.h>
#include <Modloader/app/structs/XElementValuePropertyDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XElementValuePropertyDescriptor {
        inline app::XElementValuePropertyDescriptor__Class** type_info() {
            static app::XElementValuePropertyDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XElementValuePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x04703620));
            }
            return cache;
        }
        inline app::XElementValuePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementValuePropertyDescriptor__Class>(type_info(), "MS.Internal.Xml.Linq.ComponentModel", "XElementValuePropertyDescriptor");
        }
        inline app::XElementValuePropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementValuePropertyDescriptor>(get_class());
        }
    } // namespace XElementValuePropertyDescriptor
} // namespace app::classes::types
