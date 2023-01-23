#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalSignInProvider__Class.h>
#include <Modloader/app/structs/XalSignInProvider.h>

namespace app::classes::types {
    namespace XalSignInProvider {
        inline app::XalSignInProvider__Class** type_info = (app::XalSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x04711F70));
        inline app::XalSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::XalSignInProvider__Class>(type_info, "SystemIntegration", "XalSignInProvider");
        }
        inline app::XalSignInProvider* create() {
            return il2cpp::create_object<app::XalSignInProvider>(get_class());
        }
    } // namespace XalSignInProvider
} // namespace app::classes::types
