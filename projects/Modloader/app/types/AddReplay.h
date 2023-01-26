#pragma once
#include <Modloader/app/structs/AddReplay.h>
#include <Modloader/app/structs/AddReplay__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddReplay {
        inline app::AddReplay__Class** type_info() {
            static app::AddReplay__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AddReplay__Class**)(modloader::win::memory::resolve_rva(0x04741628));
            }
            return cache;
        }
        inline app::AddReplay__Class* get_class() {
            return il2cpp::get_class<app::AddReplay__Class>(type_info(), "", "AddReplay");
        }
        inline app::AddReplay* create() {
            return il2cpp::create_object<app::AddReplay>(get_class());
        }
    } // namespace AddReplay
} // namespace app::classes::types
