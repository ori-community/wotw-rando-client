#pragma once
#include <Modloader/app/structs/SoapTypeAttribute.h>
#include <Modloader/app/structs/SoapTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapTypeAttribute {
        inline app::SoapTypeAttribute__Class** type_info() {
            static app::SoapTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x04738588));
            }
            return cache;
        }
        inline app::SoapTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapTypeAttribute__Class>(type_info(), "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
        }
        inline app::SoapTypeAttribute* create() {
            return il2cpp::create_object<app::SoapTypeAttribute>(get_class());
        }
    } // namespace SoapTypeAttribute
} // namespace app::classes::types
