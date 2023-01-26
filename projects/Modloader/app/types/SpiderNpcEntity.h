#pragma once
#include <Modloader/app/structs/SpiderNpcEntity.h>
#include <Modloader/app/structs/SpiderNpcEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderNpcEntity {
        inline app::SpiderNpcEntity__Class** type_info() {
            static app::SpiderNpcEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderNpcEntity__Class**)(modloader::win::memory::resolve_rva(0x04708F40));
            }
            return cache;
        }
        inline app::SpiderNpcEntity__Class* get_class() {
            return il2cpp::get_class<app::SpiderNpcEntity__Class>(type_info(), "", "SpiderNpcEntity");
        }
        inline app::SpiderNpcEntity* create() {
            return il2cpp::create_object<app::SpiderNpcEntity>(get_class());
        }
    } // namespace SpiderNpcEntity
} // namespace app::classes::types
