#pragma once
#include <Modloader/app/structs/RuntimeLicenseContext.h>
#include <Modloader/app/structs/RuntimeLicenseContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeLicenseContext {
        inline app::RuntimeLicenseContext__Class** type_info() {
            static app::RuntimeLicenseContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeLicenseContext__Class**)(modloader::win::memory::resolve_rva(0x0472BFA0));
            }
            return cache;
        }
        inline app::RuntimeLicenseContext__Class* get_class() {
            return il2cpp::get_class<app::RuntimeLicenseContext__Class>(type_info(), "System.ComponentModel.Design", "RuntimeLicenseContext");
        }
        inline app::RuntimeLicenseContext* create() {
            return il2cpp::create_object<app::RuntimeLicenseContext>(get_class());
        }
    } // namespace RuntimeLicenseContext
} // namespace app::classes::types
