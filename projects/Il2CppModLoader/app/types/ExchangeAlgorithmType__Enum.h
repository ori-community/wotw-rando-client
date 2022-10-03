#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExchangeAlgorithmType__Enum {
        namespace {
            app::ExchangeAlgorithmType__Enum__Class* type_info_ref = nullptr;
        }
        app::ExchangeAlgorithmType__Enum__Class** type_info = &type_info_ref;
        inline app::ExchangeAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExchangeAlgorithmType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "ExchangeAlgorithmType");
        }
        inline app::ExchangeAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::ExchangeAlgorithmType__Enum>(get_class());
        }
    } // namespace ExchangeAlgorithmType__Enum
} // namespace app::classes::types
