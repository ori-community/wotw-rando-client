#pragma once
#include <Modloader/app/structs/SingletonIdentity.h>
#include <Modloader/app/structs/SingletonIdentity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SingletonIdentity {
        inline app::SingletonIdentity__Class** type_info() {
            static app::SingletonIdentity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SingletonIdentity__Class**)(modloader::win::memory::resolve_rva(0x047695A8));
            }
            return cache;
        }
        inline app::SingletonIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingletonIdentity__Class>(type_info(), "System.Runtime.Remoting", "SingletonIdentity");
        }
        inline app::SingletonIdentity* create() {
            return il2cpp::create_object<app::SingletonIdentity>(get_class());
        }
    } // namespace SingletonIdentity
} // namespace app::classes::types
