#pragma once
#include <Modloader/app/structs/XalSignInProvider_c.h>
#include <Modloader/app/structs/XalSignInProvider_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalSignInProvider_c {
        inline app::XalSignInProvider_c__Class** type_info() {
            static app::XalSignInProvider_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalSignInProvider_c__Class**)(modloader::win::memory::resolve_rva(0x0470A688));
            }
            return cache;
        }
        inline app::XalSignInProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XalSignInProvider_c__Class>(type_info(), "SystemIntegration", "XalSignInProvider", "<>c");
        }
        inline app::XalSignInProvider_c* create() {
            return il2cpp::create_object<app::XalSignInProvider_c>(get_class());
        }
    } // namespace XalSignInProvider_c
} // namespace app::classes::types
