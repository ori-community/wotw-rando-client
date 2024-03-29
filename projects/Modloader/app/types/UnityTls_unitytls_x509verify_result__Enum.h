#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum.h>
#include <Modloader/app/structs/UnityTls_unitytls_x509verify_result__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509verify_result__Enum {
        inline app::UnityTls_unitytls_x509verify_result__Enum__Class** type_info() {
            static app::UnityTls_unitytls_x509verify_result__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityTls_unitytls_x509verify_result__Enum__Class**)(modloader::win::memory::resolve_rva(0x047113A8));
            }
            return cache;
        }
        inline app::UnityTls_unitytls_x509verify_result__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509verify_result__Enum__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_x509verify_result");
        }
        inline app::UnityTls_unitytls_x509verify_result__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509verify_result__Enum>(get_class());
        }
    } // namespace UnityTls_unitytls_x509verify_result__Enum
} // namespace app::classes::types
