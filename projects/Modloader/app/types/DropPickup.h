#pragma once
#include <Modloader/app/structs/DropPickup.h>
#include <Modloader/app/structs/DropPickup__Array.h>
#include <Modloader/app/structs/DropPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropPickup {
        inline app::DropPickup__Class** type_info() {
            static app::DropPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DropPickup__Class**)(modloader::win::memory::resolve_rva(0x047410F0));
            }
            return cache;
        }
        inline app::DropPickup__Class* get_class() {
            return il2cpp::get_class<app::DropPickup__Class>(type_info(), "", "DropPickup");
        }
        inline app::DropPickup* create() {
            return il2cpp::create_object<app::DropPickup>(get_class());
        }
        inline app::DropPickup__Array* create_array(int size) {
            return il2cpp::array_new<app::DropPickup__Array>(get_class(), size);
        }
        inline app::DropPickup__Array* create_array(const std::vector<app::DropPickup*>& items) {
            return il2cpp::array_new<app::DropPickup__Array>(get_class(), items);
        }
    } // namespace DropPickup
} // namespace app::classes::types
