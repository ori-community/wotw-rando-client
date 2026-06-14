#pragma once
#include <Modloader/app/structs/SoapFieldAttribute.h>
#include <Modloader/app/structs/SoapFieldAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapFieldAttribute {
        inline app::SoapFieldAttribute__Class** type_info() {
            static app::SoapFieldAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapFieldAttribute__Class**)(modloader::win::memory::resolve_rva(0x047522D0));
            }
            return cache;
        }
        inline app::SoapFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapFieldAttribute__Class>(type_info(), "System.Runtime.Remoting.Metadata", "SoapFieldAttribute");
        }
        inline app::SoapFieldAttribute* create() {
            return il2cpp::create_object<app::SoapFieldAttribute>(get_class());
        }
    } // namespace SoapFieldAttribute
} // namespace app::classes::types
