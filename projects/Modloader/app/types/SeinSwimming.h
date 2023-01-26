#pragma once
#include <Modloader/app/structs/SeinSwimming.h>
#include <Modloader/app/structs/SeinSwimming__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSwimming {
        inline app::SeinSwimming__Class** type_info() {
            static app::SeinSwimming__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSwimming__Class**)(modloader::win::memory::resolve_rva(0x047209F8));
            }
            return cache;
        }
        inline app::SeinSwimming__Class* get_class() {
            return il2cpp::get_class<app::SeinSwimming__Class>(type_info(), "", "SeinSwimming");
        }
        inline app::SeinSwimming* create() {
            return il2cpp::create_object<app::SeinSwimming>(get_class());
        }
    } // namespace SeinSwimming
} // namespace app::classes::types
