#pragma once
#include <Modloader/app/structs/SeinStomp.h>
#include <Modloader/app/structs/SeinStomp__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStomp {
        inline app::SeinStomp__Class** type_info() {
            static app::SeinStomp__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinStomp__Class**)(modloader::win::memory::resolve_rva(0x04760A40));
            }
            return cache;
        }
        inline app::SeinStomp__Class* get_class() {
            return il2cpp::get_class<app::SeinStomp__Class>(type_info(), "", "SeinStomp");
        }
        inline app::SeinStomp* create() {
            return il2cpp::create_object<app::SeinStomp>(get_class());
        }
    } // namespace SeinStomp
} // namespace app::classes::types
