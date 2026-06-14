#pragma once
#include <Modloader/app/structs/BaurEntity.h>
#include <Modloader/app/structs/BaurEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurEntity {
        inline app::BaurEntity__Class** type_info() {
            static app::BaurEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaurEntity__Class**)(modloader::win::memory::resolve_rva(0x0474F8E8));
            }
            return cache;
        }
        inline app::BaurEntity__Class* get_class() {
            return il2cpp::get_class<app::BaurEntity__Class>(type_info(), "", "BaurEntity");
        }
        inline app::BaurEntity* create() {
            return il2cpp::create_object<app::BaurEntity>(get_class());
        }
    } // namespace BaurEntity
} // namespace app::classes::types
