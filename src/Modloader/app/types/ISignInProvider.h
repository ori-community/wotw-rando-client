#pragma once
#include <Modloader/app/structs/ISignInProvider.h>
#include <Modloader/app/structs/ISignInProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISignInProvider {
        inline app::ISignInProvider__Class** type_info() {
            static app::ISignInProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ISignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475EC98));
            }
            return cache;
        }
        inline app::ISignInProvider__Class* get_class() {
            return il2cpp::get_class<app::ISignInProvider__Class>(type_info(), "SystemIntegration", "ISignInProvider");
        }
    } // namespace ISignInProvider
} // namespace app::classes::types
