#pragma once
#include <Modloader/app/structs/XalSignInProvider.h>
#include <Modloader/app/structs/XalSignInProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalSignInProvider {
        inline app::XalSignInProvider__Class** type_info() {
            static app::XalSignInProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x04711F70));
            }
            return cache;
        }
        inline app::XalSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::XalSignInProvider__Class>(type_info(), "SystemIntegration", "XalSignInProvider");
        }
        inline app::XalSignInProvider* create() {
            return il2cpp::create_object<app::XalSignInProvider>(get_class());
        }
    } // namespace XalSignInProvider
} // namespace app::classes::types
