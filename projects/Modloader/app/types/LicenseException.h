#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LicenseException {
        inline app::LicenseException__Class** type_info = (app::LicenseException__Class**)(modloader::win::memory::resolve_rva(0x04714D30));
        inline app::LicenseException__Class* get_class() {
            return il2cpp::get_class<app::LicenseException__Class>(type_info, "System.ComponentModel", "LicenseException");
        }
        inline app::LicenseException* create() {
            return il2cpp::create_object<app::LicenseException>(get_class());
        }
    } // namespace LicenseException
} // namespace app::classes::types
