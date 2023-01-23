#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509Utils__Class.h>
#include <Modloader/app/structs/X509Utils.h>

namespace app::classes::types {
    namespace X509Utils {
        namespace {
            inline app::X509Utils__Class* type_info_ref = nullptr;
        }
        inline app::X509Utils__Class** type_info = &type_info_ref;
        inline app::X509Utils__Class* get_class() {
            return il2cpp::get_class<app::X509Utils__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Utils");
        }
        inline app::X509Utils* create() {
            return il2cpp::create_object<app::X509Utils>(get_class());
        }
    } // namespace X509Utils
} // namespace app::classes::types
