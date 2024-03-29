#pragma once
#include <Modloader/app/structs/LightPlatform.h>
#include <Modloader/app/structs/LightPlatform__Array.h>
#include <Modloader/app/structs/LightPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightPlatform {
        inline app::LightPlatform__Class** type_info() {
            static app::LightPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightPlatform__Class**)(modloader::win::memory::resolve_rva(0x04708FF0));
            }
            return cache;
        }
        inline app::LightPlatform__Class* get_class() {
            return il2cpp::get_class<app::LightPlatform__Class>(type_info(), "", "LightPlatform");
        }
        inline app::LightPlatform* create() {
            return il2cpp::create_object<app::LightPlatform>(get_class());
        }
        inline app::LightPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::LightPlatform__Array>(get_class(), size);
        }
        inline app::LightPlatform__Array* create_array(const std::vector<app::LightPlatform*>& items) {
            return il2cpp::array_new<app::LightPlatform__Array>(get_class(), items);
        }
    } // namespace LightPlatform
} // namespace app::classes::types
