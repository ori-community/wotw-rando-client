#pragma once
#include <Modloader/app/structs/CollapsingPlatform.h>
#include <Modloader/app/structs/CollapsingPlatform__Array.h>
#include <Modloader/app/structs/CollapsingPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatform {
        inline app::CollapsingPlatform__Class** type_info() {
            static app::CollapsingPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CollapsingPlatform__Class**)(modloader::win::memory::resolve_rva(0x0476F0B0));
            }
            return cache;
        }
        inline app::CollapsingPlatform__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatform__Class>(type_info(), "", "CollapsingPlatform");
        }
        inline app::CollapsingPlatform* create() {
            return il2cpp::create_object<app::CollapsingPlatform>(get_class());
        }
        inline app::CollapsingPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::CollapsingPlatform__Array>(get_class(), size);
        }
        inline app::CollapsingPlatform__Array* create_array(const std::vector<app::CollapsingPlatform*>& items) {
            return il2cpp::array_new<app::CollapsingPlatform__Array>(get_class(), items);
        }
    } // namespace CollapsingPlatform
} // namespace app::classes::types
