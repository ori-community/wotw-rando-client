#pragma once
#include <Modloader/app/structs/SwaggerComunicator.h>
#include <Modloader/app/structs/SwaggerComunicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwaggerComunicator {
        inline app::SwaggerComunicator__Class** type_info() {
            static app::SwaggerComunicator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwaggerComunicator__Class**)(modloader::win::memory::resolve_rva(0x0470D820));
            }
            return cache;
        }
        inline app::SwaggerComunicator__Class* get_class() {
            return il2cpp::get_class<app::SwaggerComunicator__Class>(type_info(), "", "SwaggerComunicator");
        }
        inline app::SwaggerComunicator* create() {
            return il2cpp::create_object<app::SwaggerComunicator>(get_class());
        }
    } // namespace SwaggerComunicator
} // namespace app::classes::types
