#pragma once
#include <Modloader/app/structs/KeyedHashAlgorithm.h>
#include <Modloader/app/structs/KeyedHashAlgorithm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyedHashAlgorithm {
        inline app::KeyedHashAlgorithm__Class** type_info() {
            static app::KeyedHashAlgorithm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyedHashAlgorithm__Class**)(modloader::win::memory::resolve_rva(0x0477FBD8));
            }
            return cache;
        }
        inline app::KeyedHashAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::KeyedHashAlgorithm__Class>(type_info(), "System.Security.Cryptography", "KeyedHashAlgorithm");
        }
        inline app::KeyedHashAlgorithm* create() {
            return il2cpp::create_object<app::KeyedHashAlgorithm>(get_class());
        }
    } // namespace KeyedHashAlgorithm
} // namespace app::classes::types
