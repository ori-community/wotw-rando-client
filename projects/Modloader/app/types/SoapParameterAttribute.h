#pragma once
#include <Modloader/app/structs/SoapParameterAttribute.h>
#include <Modloader/app/structs/SoapParameterAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapParameterAttribute {
        inline app::SoapParameterAttribute__Class** type_info() {
            static app::SoapParameterAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapParameterAttribute__Class**)(modloader::win::memory::resolve_rva(0x04799680));
            }
            return cache;
        }
        inline app::SoapParameterAttribute__Class* get_class() {
            return il2cpp::get_class<app::SoapParameterAttribute__Class>(type_info(), "System.Runtime.Remoting.Metadata", "SoapParameterAttribute");
        }
        inline app::SoapParameterAttribute* create() {
            return il2cpp::create_object<app::SoapParameterAttribute>(get_class());
        }
    } // namespace SoapParameterAttribute
} // namespace app::classes::types
