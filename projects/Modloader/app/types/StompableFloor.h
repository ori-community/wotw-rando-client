#pragma once
#include <Modloader/app/structs/StompableFloor.h>
#include <Modloader/app/structs/StompableFloor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StompableFloor {
        inline app::StompableFloor__Class** type_info() {
            static app::StompableFloor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StompableFloor__Class**)(modloader::win::memory::resolve_rva(0x04719ED0));
            }
            return cache;
        }
        inline app::StompableFloor__Class* get_class() {
            return il2cpp::get_class<app::StompableFloor__Class>(type_info(), "", "StompableFloor");
        }
        inline app::StompableFloor* create() {
            return il2cpp::create_object<app::StompableFloor>(get_class());
        }
    } // namespace StompableFloor
} // namespace app::classes::types
