#pragma once
#include <Modloader/app/structs/CipherAlgorithmType__Enum.h>
#include <Modloader/app/structs/CipherAlgorithmType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CipherAlgorithmType__Enum {
        inline app::CipherAlgorithmType__Enum__Class** type_info() {
            static app::CipherAlgorithmType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CipherAlgorithmType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CipherAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherAlgorithmType__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "CipherAlgorithmType");
        }
        inline app::CipherAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::CipherAlgorithmType__Enum>(get_class());
        }
    } // namespace CipherAlgorithmType__Enum
} // namespace app::classes::types
