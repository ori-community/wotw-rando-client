#pragma once
#include <Modloader/app/structs/UberShaderAPI.h>
#include <Modloader/app/structs/UberShaderAPI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderAPI {
        inline app::UberShaderAPI__Class** type_info() {
            static app::UberShaderAPI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberShaderAPI__Class**)(modloader::win::memory::resolve_rva(0x0471E900));
            }
            return cache;
        }
        inline app::UberShaderAPI__Class* get_class() {
            return il2cpp::get_class<app::UberShaderAPI__Class>(type_info(), "", "UberShaderAPI");
        }
        inline app::UberShaderAPI* create() {
            return il2cpp::create_object<app::UberShaderAPI>(get_class());
        }
    } // namespace UberShaderAPI
} // namespace app::classes::types
