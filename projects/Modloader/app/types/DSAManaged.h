#pragma once
#include <Modloader/app/structs/DSAManaged.h>
#include <Modloader/app/structs/DSAManaged__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DSAManaged {
        inline app::DSAManaged__Class** type_info() {
            static app::DSAManaged__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DSAManaged__Class**)(modloader::win::memory::resolve_rva(0x04736AB0));
            }
            return cache;
        }
        inline app::DSAManaged__Class* get_class() {
            return il2cpp::get_class<app::DSAManaged__Class>(type_info(), "Mono.Security.Cryptography", "DSAManaged");
        }
        inline app::DSAManaged* create() {
            return il2cpp::create_object<app::DSAManaged>(get_class());
        }
    } // namespace DSAManaged
} // namespace app::classes::types
