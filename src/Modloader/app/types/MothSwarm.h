#pragma once
#include <Modloader/app/structs/MothSwarm.h>
#include <Modloader/app/structs/MothSwarm__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MothSwarm {
        inline app::MothSwarm__Class** type_info() {
            static app::MothSwarm__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MothSwarm__Class**)(modloader::win::memory::resolve_rva(0x04742428));
            }
            return cache;
        }
        inline app::MothSwarm__Class* get_class() {
            return il2cpp::get_class<app::MothSwarm__Class>(type_info(), "", "MothSwarm");
        }
        inline app::MothSwarm* create() {
            return il2cpp::create_object<app::MothSwarm>(get_class());
        }
    } // namespace MothSwarm
} // namespace app::classes::types
