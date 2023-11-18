#pragma once
#include <Modloader/app/structs/SeinRide.h>
#include <Modloader/app/structs/SeinRide__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRide {
        inline app::SeinRide__Class** type_info() {
            static app::SeinRide__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinRide__Class**)(modloader::win::memory::resolve_rva(0x04772FC8));
            }
            return cache;
        }
        inline app::SeinRide__Class* get_class() {
            return il2cpp::get_class<app::SeinRide__Class>(type_info(), "", "SeinRide");
        }
        inline app::SeinRide* create() {
            return il2cpp::create_object<app::SeinRide>(get_class());
        }
    } // namespace SeinRide
} // namespace app::classes::types
