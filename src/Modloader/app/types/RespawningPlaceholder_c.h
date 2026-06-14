#pragma once
#include <Modloader/app/structs/RespawningPlaceholder_c.h>
#include <Modloader/app/structs/RespawningPlaceholder_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RespawningPlaceholder_c {
        inline app::RespawningPlaceholder_c__Class** type_info() {
            static app::RespawningPlaceholder_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RespawningPlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04798B30));
            }
            return cache;
        }
        inline app::RespawningPlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RespawningPlaceholder_c__Class>(type_info(), "", "RespawningPlaceholder", "<>c");
        }
        inline app::RespawningPlaceholder_c* create() {
            return il2cpp::create_object<app::RespawningPlaceholder_c>(get_class());
        }
    } // namespace RespawningPlaceholder_c
} // namespace app::classes::types
