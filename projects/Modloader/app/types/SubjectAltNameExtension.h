#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SubjectAltNameExtension__Class.h>
#include <Modloader/app/structs/SubjectAltNameExtension.h>

namespace app::classes::types {
    namespace SubjectAltNameExtension {
        inline app::SubjectAltNameExtension__Class** type_info = (app::SubjectAltNameExtension__Class**)(modloader::win::memory::resolve_rva(0x04741A40));
        inline app::SubjectAltNameExtension__Class* get_class() {
            return il2cpp::get_class<app::SubjectAltNameExtension__Class>(type_info, "Mono.Security.X509.Extensions", "SubjectAltNameExtension");
        }
        inline app::SubjectAltNameExtension* create() {
            return il2cpp::create_object<app::SubjectAltNameExtension>(get_class());
        }
    } // namespace SubjectAltNameExtension
} // namespace app::classes::types
