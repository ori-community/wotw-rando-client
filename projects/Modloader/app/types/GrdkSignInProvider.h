#pragma once
#include <Modloader/app/structs/GrdkSignInProvider.h>
#include <Modloader/app/structs/GrdkSignInProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrdkSignInProvider {
        inline app::GrdkSignInProvider__Class** type_info() {
            static app::GrdkSignInProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrdkSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F4C0));
            }
            return cache;
        }
        inline app::GrdkSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::GrdkSignInProvider__Class>(type_info(), "SystemIntegration", "GrdkSignInProvider");
        }
        inline app::GrdkSignInProvider* create() {
            return il2cpp::create_object<app::GrdkSignInProvider>(get_class());
        }
    } // namespace GrdkSignInProvider
} // namespace app::classes::types
