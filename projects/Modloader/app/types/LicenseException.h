#pragma once
#include <Modloader/app/structs/LicenseException.h>
#include <Modloader/app/structs/LicenseException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LicenseException {
        inline app::LicenseException__Class** type_info() {
            static app::LicenseException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LicenseException__Class**)(modloader::win::memory::resolve_rva(0x04714D30));
            }
            return cache;
        }
        inline app::LicenseException__Class* get_class() {
            return il2cpp::get_class<app::LicenseException__Class>(type_info(), "System.ComponentModel", "LicenseException");
        }
        inline app::LicenseException* create() {
            return il2cpp::create_object<app::LicenseException>(get_class());
        }
    } // namespace LicenseException
} // namespace app::classes::types
