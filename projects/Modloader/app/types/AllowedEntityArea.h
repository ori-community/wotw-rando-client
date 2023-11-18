#pragma once
#include <Modloader/app/structs/AllowedEntityArea.h>
#include <Modloader/app/structs/AllowedEntityArea__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AllowedEntityArea {
        inline app::AllowedEntityArea__Class** type_info() {
            static app::AllowedEntityArea__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AllowedEntityArea__Class**)(modloader::win::memory::resolve_rva(0x04753A60));
            }
            return cache;
        }
        inline app::AllowedEntityArea__Class* get_class() {
            return il2cpp::get_class<app::AllowedEntityArea__Class>(type_info(), "", "AllowedEntityArea");
        }
        inline app::AllowedEntityArea* create() {
            return il2cpp::create_object<app::AllowedEntityArea>(get_class());
        }
    } // namespace AllowedEntityArea
} // namespace app::classes::types
