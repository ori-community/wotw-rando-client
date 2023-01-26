#pragma once
#include <Modloader/app/structs/DepotId_t.h>
#include <Modloader/app/structs/DepotId_t__Array.h>
#include <Modloader/app/structs/DepotId_t__Boxed.h>
#include <Modloader/app/structs/DepotId_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepotId_t {
        inline app::DepotId_t__Class** type_info() {
            static app::DepotId_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DepotId_t__Class**)(modloader::win::memory::resolve_rva(0x0475CB68));
            }
            return cache;
        }
        inline app::DepotId_t__Class* get_class() {
            return il2cpp::get_class<app::DepotId_t__Class>(type_info(), "Steamworks", "DepotId_t");
        }
        inline app::DepotId_t* create() {
            return il2cpp::create_object<app::DepotId_t>(get_class());
        }
        inline app::DepotId_t__Boxed* box(app::DepotId_t value) {
            return il2cpp::box_value<app::DepotId_t__Boxed>(get_class(), value);
        }
        inline app::DepotId_t__Array* create_array(int size) {
            return il2cpp::array_new<app::DepotId_t__Array>(get_class(), size);
        }
        inline app::DepotId_t__Array* create_array(const std::vector<app::DepotId_t>& items) {
            return il2cpp::array_new<app::DepotId_t__Array>(get_class(), items);
        }
    } // namespace DepotId_t
} // namespace app::classes::types
