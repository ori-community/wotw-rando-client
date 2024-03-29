#pragma once
#include <Modloader/app/structs/ItemInstance.h>
#include <Modloader/app/structs/ItemInstance__Array.h>
#include <Modloader/app/structs/ItemInstance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ItemInstance {
        inline app::ItemInstance__Class** type_info() {
            static app::ItemInstance__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ItemInstance__Class**)(modloader::win::memory::resolve_rva(0x04720B28));
            }
            return cache;
        }
        inline app::ItemInstance__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance__Class>(type_info(), "PlayFab.ClientModels", "ItemInstance");
        }
        inline app::ItemInstance* create() {
            return il2cpp::create_object<app::ItemInstance>(get_class());
        }
        inline app::ItemInstance__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemInstance__Array>(get_class(), size);
        }
        inline app::ItemInstance__Array* create_array(const std::vector<app::ItemInstance*>& items) {
            return il2cpp::array_new<app::ItemInstance__Array>(get_class(), items);
        }
    } // namespace ItemInstance
} // namespace app::classes::types
