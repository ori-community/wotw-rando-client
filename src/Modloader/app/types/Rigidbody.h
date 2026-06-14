#pragma once
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Rigidbody__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rigidbody {
        inline app::Rigidbody__Class** type_info() {
            static app::Rigidbody__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Rigidbody__Class**)(modloader::win::memory::resolve_rva(0x0476DC60));
            }
            return cache;
        }
        inline app::Rigidbody__Class* get_class() {
            return il2cpp::get_class<app::Rigidbody__Class>(type_info(), "UnityEngine", "Rigidbody");
        }
        inline app::Rigidbody* create() {
            return il2cpp::create_object<app::Rigidbody>(get_class());
        }
        inline app::Rigidbody__Array* create_array(int size) {
            return il2cpp::array_new<app::Rigidbody__Array>(get_class(), size);
        }
        inline app::Rigidbody__Array* create_array(const std::vector<app::Rigidbody*>& items) {
            return il2cpp::array_new<app::Rigidbody__Array>(get_class(), items);
        }
    } // namespace Rigidbody
} // namespace app::classes::types
