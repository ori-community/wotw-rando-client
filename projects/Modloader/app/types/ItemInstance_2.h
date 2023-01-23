#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ItemInstance_2__Class.h>
#include <Modloader/app/structs/ItemInstance_2.h>
#include <Modloader/app/structs/ItemInstance_2__Array.h>

namespace app::classes::types {
    namespace ItemInstance_2 {
        namespace {
            inline app::ItemInstance_2__Class* type_info_ref = nullptr;
        }
        inline app::ItemInstance_2__Class** type_info = &type_info_ref;
        inline app::ItemInstance_2__Class* get_class() {
            return il2cpp::get_class<app::ItemInstance_2__Class>(type_info, "PlayFab.ServerModels", "ItemInstance");
        }
        inline app::ItemInstance_2* create() {
            return il2cpp::create_object<app::ItemInstance_2>(get_class());
        }
        inline app::ItemInstance_2__Array* create_array(int size) {
            return il2cpp::array_new<app::ItemInstance_2__Array>(get_class(), size);
        }
        inline app::ItemInstance_2__Array* create_array(const std::vector<app::ItemInstance_2*>& items) {
            return il2cpp::array_new<app::ItemInstance_2__Array>(get_class(), items);
        }
    } // namespace ItemInstance_2
} // namespace app::classes::types
