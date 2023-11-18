#pragma once
#include <Modloader/app/structs/LightDarkeningErasingComparer.h>
#include <Modloader/app/structs/LightDarkeningErasingComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightDarkeningErasingComparer {
        inline app::LightDarkeningErasingComparer__Class** type_info() {
            static app::LightDarkeningErasingComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightDarkeningErasingComparer__Class**)(modloader::win::memory::resolve_rva(0x04777AA8));
            }
            return cache;
        }
        inline app::LightDarkeningErasingComparer__Class* get_class() {
            return il2cpp::get_class<app::LightDarkeningErasingComparer__Class>(type_info(), "", "LightDarkeningErasingComparer");
        }
        inline app::LightDarkeningErasingComparer* create() {
            return il2cpp::create_object<app::LightDarkeningErasingComparer>(get_class());
        }
    } // namespace LightDarkeningErasingComparer
} // namespace app::classes::types
