#pragma once
#include <Modloader/app/structs/NetscapeCertTypeExtension_CertTypes__Enum.h>
#include <Modloader/app/structs/NetscapeCertTypeExtension_CertTypes__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetscapeCertTypeExtension_CertTypes__Enum {
        inline app::NetscapeCertTypeExtension_CertTypes__Enum__Class** type_info() {
            static app::NetscapeCertTypeExtension_CertTypes__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NetscapeCertTypeExtension_CertTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775420));
            }
            return cache;
        }
        inline app::NetscapeCertTypeExtension_CertTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NetscapeCertTypeExtension_CertTypes__Enum__Class>(type_info(), "Mono.Security.X509.Extensions", "NetscapeCertTypeExtension", "CertTypes");
        }
        inline app::NetscapeCertTypeExtension_CertTypes__Enum* create() {
            return il2cpp::create_object<app::NetscapeCertTypeExtension_CertTypes__Enum>(get_class());
        }
    } // namespace NetscapeCertTypeExtension_CertTypes__Enum
} // namespace app::classes::types
