#pragma once
#include <Modloader/app/structs/SpiderlingEntity.h>
#include <Modloader/app/structs/SpiderlingEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingEntity {
        inline app::SpiderlingEntity__Class** type_info() {
            static app::SpiderlingEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderlingEntity__Class**)(modloader::win::memory::resolve_rva(0x04717F08));
            }
            return cache;
        }
        inline app::SpiderlingEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingEntity__Class>(type_info(), "", "SpiderlingEntity");
        }
        inline app::SpiderlingEntity* create() {
            return il2cpp::create_object<app::SpiderlingEntity>(get_class());
        }
    } // namespace SpiderlingEntity
} // namespace app::classes::types
