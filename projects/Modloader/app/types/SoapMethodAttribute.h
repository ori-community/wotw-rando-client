#pragma once
#include <Modloader/app/structs/SoapMethodAttribute.h>
#include <Modloader/app/structs/SoapMethodAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapMethodAttribute {
        inline app::SoapMethodAttribute__Class** type_info() {
            static app::SoapMethodAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapMethodAttribute__Class**)(modloader::win::memory::resolve_rva(0x047050C0));
            }
            return cache;
        }
        inline app::SoapMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapMethodAttribute__Class>(type_info(), "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
        }
        inline app::SoapMethodAttribute* create() {
            return il2cpp::create_object<app::SoapMethodAttribute>(get_class());
        }
    } // namespace SoapMethodAttribute
} // namespace app::classes::types
