#pragma once
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum.h>
#include <Modloader/app/structs/ExchangeAlgorithmType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExchangeAlgorithmType__Enum {
        inline app::ExchangeAlgorithmType__Enum__Class** type_info() {
            static app::ExchangeAlgorithmType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExchangeAlgorithmType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExchangeAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExchangeAlgorithmType__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls", "ExchangeAlgorithmType");
        }
        inline app::ExchangeAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::ExchangeAlgorithmType__Enum>(get_class());
        }
    } // namespace ExchangeAlgorithmType__Enum
} // namespace app::classes::types
