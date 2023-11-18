#pragma once
#include <Modloader/app/structs/Rail.h>
#include <Modloader/app/structs/Rail__Array.h>
#include <Modloader/app/structs/Rail__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rail {
        inline app::Rail__Class** type_info() {
            static app::Rail__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Rail__Class**)(modloader::win::memory::resolve_rva(0x047175C0));
            }
            return cache;
        }
        inline app::Rail__Class* get_class() {
            return il2cpp::get_class<app::Rail__Class>(type_info(), "", "Rail");
        }
        inline app::Rail* create() {
            return il2cpp::create_object<app::Rail>(get_class());
        }
        inline app::Rail__Array* create_array(int size) {
            return il2cpp::array_new<app::Rail__Array>(get_class(), size);
        }
        inline app::Rail__Array* create_array(const std::vector<app::Rail*>& items) {
            return il2cpp::array_new<app::Rail__Array>(get_class(), items);
        }
    } // namespace Rail
} // namespace app::classes::types
