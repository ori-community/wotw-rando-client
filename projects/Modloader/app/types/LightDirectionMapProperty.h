#pragma once
#include <Modloader/app/structs/LightDirectionMapProperty.h>
#include <Modloader/app/structs/LightDirectionMapProperty__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDirectionMapProperty {
        inline app::LightDirectionMapProperty__Class** type_info() {
            static app::LightDirectionMapProperty__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightDirectionMapProperty__Class**)(modloader::win::memory::resolve_rva(0x04731FC0));
            }
            return cache;
        }
        inline app::LightDirectionMapProperty__Class* get_class() {
            return il2cpp::get_class<app::LightDirectionMapProperty__Class>(type_info(), "UberShader", "LightDirectionMapProperty");
        }
        inline app::LightDirectionMapProperty* create() {
            return il2cpp::create_object<app::LightDirectionMapProperty>(get_class());
        }
    } // namespace LightDirectionMapProperty
} // namespace app::classes::types
