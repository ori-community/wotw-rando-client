#pragma once
#include <Modloader/app/structs/ASN1_1.h>
#include <Modloader/app/structs/ASN1_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ASN1_1 {
        inline app::ASN1_1__Class** type_info() {
            static app::ASN1_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ASN1_1__Class**)(modloader::win::memory::resolve_rva(0x0471E940));
            }
            return cache;
        }
        inline app::ASN1_1__Class* get_class() {
            return il2cpp::get_class<app::ASN1_1__Class>(type_info(), "Mono.Security", "ASN1");
        }
        inline app::ASN1_1* create() {
            return il2cpp::create_object<app::ASN1_1>(get_class());
        }
    } // namespace ASN1_1
} // namespace app::classes::types
