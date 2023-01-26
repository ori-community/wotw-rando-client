#pragma once
#include <Modloader/app/structs/SavePedestal.h>
#include <Modloader/app/structs/SavePedestal__Array.h>
#include <Modloader/app/structs/SavePedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SavePedestal {
        inline app::SavePedestal__Class** type_info() {
            static app::SavePedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SavePedestal__Class**)(modloader::win::memory::resolve_rva(0x0475F890));
            }
            return cache;
        }
        inline app::SavePedestal__Class* get_class() {
            return il2cpp::get_class<app::SavePedestal__Class>(type_info(), "", "SavePedestal");
        }
        inline app::SavePedestal* create() {
            return il2cpp::create_object<app::SavePedestal>(get_class());
        }
        inline app::SavePedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::SavePedestal__Array>(get_class(), size);
        }
        inline app::SavePedestal__Array* create_array(const std::vector<app::SavePedestal*>& items) {
            return il2cpp::array_new<app::SavePedestal__Array>(get_class(), items);
        }
    } // namespace SavePedestal
} // namespace app::classes::types
