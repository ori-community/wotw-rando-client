#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NetscapeCertTypeExtension__Class.h>
#include <Modloader/app/structs/NetscapeCertTypeExtension.h>

namespace app::classes::types {
    namespace NetscapeCertTypeExtension {
        inline app::NetscapeCertTypeExtension__Class** type_info = (app::NetscapeCertTypeExtension__Class**)(modloader::win::memory::resolve_rva(0x04775208));
        inline app::NetscapeCertTypeExtension__Class* get_class() {
            return il2cpp::get_class<app::NetscapeCertTypeExtension__Class>(type_info, "Mono.Security.X509.Extensions", "NetscapeCertTypeExtension");
        }
        inline app::NetscapeCertTypeExtension* create() {
            return il2cpp::create_object<app::NetscapeCertTypeExtension>(get_class());
        }
    } // namespace NetscapeCertTypeExtension
} // namespace app::classes::types
