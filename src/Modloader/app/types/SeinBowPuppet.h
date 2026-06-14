#pragma once
#include <Modloader/app/structs/SeinBowPuppet.h>
#include <Modloader/app/structs/SeinBowPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBowPuppet {
        inline app::SeinBowPuppet__Class** type_info() {
            static app::SeinBowPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBowPuppet__Class**)(modloader::win::memory::resolve_rva(0x04708E98));
            }
            return cache;
        }
        inline app::SeinBowPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinBowPuppet__Class>(type_info(), "", "SeinBowPuppet");
        }
        inline app::SeinBowPuppet* create() {
            return il2cpp::create_object<app::SeinBowPuppet>(get_class());
        }
    } // namespace SeinBowPuppet
} // namespace app::classes::types
