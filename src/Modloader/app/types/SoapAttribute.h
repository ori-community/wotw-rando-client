#pragma once
#include <Modloader/app/structs/SoapAttribute.h>
#include <Modloader/app/structs/SoapAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapAttribute {
        inline app::SoapAttribute__Class** type_info() {
            static app::SoapAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapAttribute__Class**)(modloader::win::memory::resolve_rva(0x04704160));
            }
            return cache;
        }
        inline app::SoapAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapAttribute__Class>(type_info(), "System.Runtime.Remoting.Metadata", "SoapAttribute");
        }
        inline app::SoapAttribute* create() {
            return il2cpp::create_object<app::SoapAttribute>(get_class());
        }
    } // namespace SoapAttribute
} // namespace app::classes::types
