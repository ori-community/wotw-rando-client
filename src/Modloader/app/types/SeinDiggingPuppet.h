#pragma once
#include <Modloader/app/structs/SeinDiggingPuppet.h>
#include <Modloader/app/structs/SeinDiggingPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDiggingPuppet {
        inline app::SeinDiggingPuppet__Class** type_info() {
            static app::SeinDiggingPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDiggingPuppet__Class**)(modloader::win::memory::resolve_rva(0x04780A80));
            }
            return cache;
        }
        inline app::SeinDiggingPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDiggingPuppet__Class>(type_info(), "", "SeinDiggingPuppet");
        }
        inline app::SeinDiggingPuppet* create() {
            return il2cpp::create_object<app::SeinDiggingPuppet>(get_class());
        }
    } // namespace SeinDiggingPuppet
} // namespace app::classes::types
