#pragma once
#include <Modloader/app/structs/SeinRidePuppet.h>
#include <Modloader/app/structs/SeinRidePuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRidePuppet {
        inline app::SeinRidePuppet__Class** type_info() {
            static app::SeinRidePuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinRidePuppet__Class**)(modloader::win::memory::resolve_rva(0x04791080));
            }
            return cache;
        }
        inline app::SeinRidePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRidePuppet__Class>(type_info(), "", "SeinRidePuppet");
        }
        inline app::SeinRidePuppet* create() {
            return il2cpp::create_object<app::SeinRidePuppet>(get_class());
        }
    } // namespace SeinRidePuppet
} // namespace app::classes::types
