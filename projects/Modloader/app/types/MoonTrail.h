#pragma once
#include <Modloader/app/structs/MoonTrail.h>
#include <Modloader/app/structs/MoonTrail__Array.h>
#include <Modloader/app/structs/MoonTrail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail {
        inline app::MoonTrail__Class** type_info() {
            static app::MoonTrail__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTrail__Class**)(modloader::win::memory::resolve_rva(0x0476CC70));
            }
            return cache;
        }
        inline app::MoonTrail__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail__Class>(type_info(), "Moon", "MoonTrail");
        }
        inline app::MoonTrail* create() {
            return il2cpp::create_object<app::MoonTrail>(get_class());
        }
        inline app::MoonTrail__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail__Array>(get_class(), size);
        }
        inline app::MoonTrail__Array* create_array(const std::vector<app::MoonTrail*>& items) {
            return il2cpp::array_new<app::MoonTrail__Array>(get_class(), items);
        }
    } // namespace MoonTrail
} // namespace app::classes::types
