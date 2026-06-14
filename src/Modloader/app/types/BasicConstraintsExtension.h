#pragma once
#include <Modloader/app/structs/BasicConstraintsExtension.h>
#include <Modloader/app/structs/BasicConstraintsExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BasicConstraintsExtension {
        inline app::BasicConstraintsExtension__Class** type_info() {
            static app::BasicConstraintsExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BasicConstraintsExtension__Class**)(modloader::win::memory::resolve_rva(0x04743098));
            }
            return cache;
        }
        inline app::BasicConstraintsExtension__Class* get_class() {
            return il2cpp::get_class<app::BasicConstraintsExtension__Class>(type_info(), "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
        }
        inline app::BasicConstraintsExtension* create() {
            return il2cpp::create_object<app::BasicConstraintsExtension>(get_class());
        }
    } // namespace BasicConstraintsExtension
} // namespace app::classes::types
