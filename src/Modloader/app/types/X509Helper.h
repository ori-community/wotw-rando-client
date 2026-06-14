#pragma once
#include <Modloader/app/structs/X509Helper.h>
#include <Modloader/app/structs/X509Helper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Helper {
        inline app::X509Helper__Class** type_info() {
            static app::X509Helper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Helper__Class**)(modloader::win::memory::resolve_rva(0x04723FF0));
            }
            return cache;
        }
        inline app::X509Helper__Class* get_class() {
            return il2cpp::get_class<app::X509Helper__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509Helper");
        }
        inline app::X509Helper* create() {
            return il2cpp::create_object<app::X509Helper>(get_class());
        }
    } // namespace X509Helper
} // namespace app::classes::types
