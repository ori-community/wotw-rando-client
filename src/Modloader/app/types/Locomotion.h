#pragma once
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/Locomotion__Array.h>
#include <Modloader/app/structs/Locomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locomotion {
        inline app::Locomotion__Class** type_info() {
            static app::Locomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Locomotion__Class**)(modloader::win::memory::resolve_rva(0x04717448));
            }
            return cache;
        }
        inline app::Locomotion__Class* get_class() {
            return il2cpp::get_class<app::Locomotion__Class>(type_info(), "Moon", "Locomotion");
        }
        inline app::Locomotion* create() {
            return il2cpp::create_object<app::Locomotion>(get_class());
        }
        inline app::Locomotion__Array* create_array(int size) {
            return il2cpp::array_new<app::Locomotion__Array>(get_class(), size);
        }
        inline app::Locomotion__Array* create_array(const std::vector<app::Locomotion*>& items) {
            return il2cpp::array_new<app::Locomotion__Array>(get_class(), items);
        }
    } // namespace Locomotion
} // namespace app::classes::types
