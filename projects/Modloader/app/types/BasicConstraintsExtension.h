#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BasicConstraintsExtension {
        inline app::BasicConstraintsExtension__Class** type_info = (app::BasicConstraintsExtension__Class**)(modloader::win::memory::resolve_rva(0x04743098));
        inline app::BasicConstraintsExtension__Class* get_class() {
            return il2cpp::get_class<app::BasicConstraintsExtension__Class>(type_info, "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
        }
        inline app::BasicConstraintsExtension* create() {
            return il2cpp::create_object<app::BasicConstraintsExtension>(get_class());
        }
    } // namespace BasicConstraintsExtension
} // namespace app::classes::types
