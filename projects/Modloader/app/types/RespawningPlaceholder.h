#pragma once
#include <Modloader/app/structs/RespawningPlaceholder.h>
#include <Modloader/app/structs/RespawningPlaceholder__Array.h>
#include <Modloader/app/structs/RespawningPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholder {
        inline app::RespawningPlaceholder__Class** type_info() {
            static app::RespawningPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RespawningPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x04789208));
            }
            return cache;
        }
        inline app::RespawningPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::RespawningPlaceholder__Class>(type_info(), "", "RespawningPlaceholder");
        }
        inline app::RespawningPlaceholder* create() {
            return il2cpp::create_object<app::RespawningPlaceholder>(get_class());
        }
        inline app::RespawningPlaceholder__Array* create_array(int size) {
            return il2cpp::array_new<app::RespawningPlaceholder__Array>(get_class(), size);
        }
        inline app::RespawningPlaceholder__Array* create_array(const std::vector<app::RespawningPlaceholder*>& items) {
            return il2cpp::array_new<app::RespawningPlaceholder__Array>(get_class(), items);
        }
    } // namespace RespawningPlaceholder
} // namespace app::classes::types
