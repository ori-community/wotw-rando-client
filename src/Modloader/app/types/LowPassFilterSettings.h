#pragma once
#include <Modloader/app/structs/LowPassFilterSettings.h>
#include <Modloader/app/structs/LowPassFilterSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowPassFilterSettings {
        inline app::LowPassFilterSettings__Class** type_info() {
            static app::LowPassFilterSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LowPassFilterSettings__Class**)(modloader::win::memory::resolve_rva(0x0477C418));
            }
            return cache;
        }
        inline app::LowPassFilterSettings__Class* get_class() {
            return il2cpp::get_class<app::LowPassFilterSettings__Class>(type_info(), "", "LowPassFilterSettings");
        }
        inline app::LowPassFilterSettings* create() {
            return il2cpp::create_object<app::LowPassFilterSettings>(get_class());
        }
    } // namespace LowPassFilterSettings
} // namespace app::classes::types
