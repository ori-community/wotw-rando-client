#pragma once
#include <Modloader/app/structs/Boid.h>
#include <Modloader/app/structs/Boid__Array.h>
#include <Modloader/app/structs/Boid__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Boid {
        inline app::Boid__Class** type_info() {
            static app::Boid__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Boid__Class**)(modloader::win::memory::resolve_rva(0x04737F80));
            }
            return cache;
        }
        inline app::Boid__Class* get_class() {
            return il2cpp::get_class<app::Boid__Class>(type_info(), "", "Boid");
        }
        inline app::Boid* create() {
            return il2cpp::create_object<app::Boid>(get_class());
        }
        inline app::Boid__Array* create_array(int size) {
            return il2cpp::array_new<app::Boid__Array>(get_class(), size);
        }
        inline app::Boid__Array* create_array(const std::vector<app::Boid*>& items) {
            return il2cpp::array_new<app::Boid__Array>(get_class(), items);
        }
    } // namespace Boid
} // namespace app::classes::types
