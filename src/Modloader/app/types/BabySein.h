#pragma once
#include <Modloader/app/structs/BabySein.h>
#include <Modloader/app/structs/BabySein__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySein {
        inline app::BabySein__Class** type_info() {
            static app::BabySein__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BabySein__Class**)(modloader::win::memory::resolve_rva(0x04762728));
            }
            return cache;
        }
        inline app::BabySein__Class* get_class() {
            return il2cpp::get_class<app::BabySein__Class>(type_info(), "", "BabySein");
        }
        inline app::BabySein* create() {
            return il2cpp::create_object<app::BabySein>(get_class());
        }
    } // namespace BabySein
} // namespace app::classes::types
