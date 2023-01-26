#pragma once
#include <Modloader/app/structs/SoapServices.h>
#include <Modloader/app/structs/SoapServices__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoapServices {
        inline app::SoapServices__Class** type_info() {
            static app::SoapServices__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SoapServices__Class**)(modloader::win::memory::resolve_rva(0x0474BF38));
            }
            return cache;
        }
        inline app::SoapServices__Class* get_class() {
            return il2cpp::get_class<app::SoapServices__Class>(type_info(), "System.Runtime.Remoting", "SoapServices");
        }
        inline app::SoapServices* create() {
            return il2cpp::create_object<app::SoapServices>(get_class());
        }
    } // namespace SoapServices
} // namespace app::classes::types
