#pragma once
#include <Modloader/app/structs/X509ChainPolicy.h>
#include <Modloader/app/structs/X509ChainPolicy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ChainPolicy {
        inline app::X509ChainPolicy__Class** type_info() {
            static app::X509ChainPolicy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ChainPolicy__Class**)(modloader::win::memory::resolve_rva(0x0474C3A0));
            }
            return cache;
        }
        inline app::X509ChainPolicy__Class* get_class() {
            return il2cpp::get_class<app::X509ChainPolicy__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
        }
        inline app::X509ChainPolicy* create() {
            return il2cpp::create_object<app::X509ChainPolicy>(get_class());
        }
    } // namespace X509ChainPolicy
} // namespace app::classes::types
