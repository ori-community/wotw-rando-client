#pragma once
#include <Modloader/app/structs/MothSwarmer.h>
#include <Modloader/app/structs/MothSwarmer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothSwarmer {
        inline app::MothSwarmer__Class** type_info() {
            static app::MothSwarmer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MothSwarmer__Class**)(modloader::win::memory::resolve_rva(0x04701C58));
            }
            return cache;
        }
        inline app::MothSwarmer__Class* get_class() {
            return il2cpp::get_class<app::MothSwarmer__Class>(type_info(), "", "MothSwarmer");
        }
        inline app::MothSwarmer* create() {
            return il2cpp::create_object<app::MothSwarmer>(get_class());
        }
    } // namespace MothSwarmer
} // namespace app::classes::types
