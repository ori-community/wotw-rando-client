#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ASN1__Class.h>
#include <Modloader/app/structs/ASN1.h>

namespace app::classes::types {
    namespace ASN1 {
        inline app::ASN1__Class** type_info = (app::ASN1__Class**)(modloader::win::memory::resolve_rva(0x04744EA0));
        inline app::ASN1__Class* get_class() {
            return il2cpp::get_class<app::ASN1__Class>(type_info, "Mono.Security", "ASN1");
        }
        inline app::ASN1* create() {
            return il2cpp::create_object<app::ASN1>(get_class());
        }
    } // namespace ASN1
} // namespace app::classes::types
