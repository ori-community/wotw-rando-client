#pragma once
#include <Modloader/app/structs/SecureStringHasher.h>
#include <Modloader/app/structs/SecureStringHasher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecureStringHasher {
        inline app::SecureStringHasher__Class** type_info() {
            static app::SecureStringHasher__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecureStringHasher__Class**)(modloader::win::memory::resolve_rva(0x0476D3C8));
            }
            return cache;
        }
        inline app::SecureStringHasher__Class* get_class() {
            return il2cpp::get_class<app::SecureStringHasher__Class>(type_info(), "System.Xml", "SecureStringHasher");
        }
        inline app::SecureStringHasher* create() {
            return il2cpp::create_object<app::SecureStringHasher>(get_class());
        }
    } // namespace SecureStringHasher
} // namespace app::classes::types
