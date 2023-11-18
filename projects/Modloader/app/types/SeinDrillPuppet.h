#pragma once
#include <Modloader/app/structs/SeinDrillPuppet.h>
#include <Modloader/app/structs/SeinDrillPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDrillPuppet {
        inline app::SeinDrillPuppet__Class** type_info() {
            static app::SeinDrillPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDrillPuppet__Class**)(modloader::win::memory::resolve_rva(0x0478EFB0));
            }
            return cache;
        }
        inline app::SeinDrillPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDrillPuppet__Class>(type_info(), "", "SeinDrillPuppet");
        }
        inline app::SeinDrillPuppet* create() {
            return il2cpp::create_object<app::SeinDrillPuppet>(get_class());
        }
    } // namespace SeinDrillPuppet
} // namespace app::classes::types
