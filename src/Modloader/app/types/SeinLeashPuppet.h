#pragma once
#include <Modloader/app/structs/SeinLeashPuppet.h>
#include <Modloader/app/structs/SeinLeashPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLeashPuppet {
        inline app::SeinLeashPuppet__Class** type_info() {
            static app::SeinLeashPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinLeashPuppet__Class**)(modloader::win::memory::resolve_rva(0x0478D9D0));
            }
            return cache;
        }
        inline app::SeinLeashPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinLeashPuppet__Class>(type_info(), "", "SeinLeashPuppet");
        }
        inline app::SeinLeashPuppet* create() {
            return il2cpp::create_object<app::SeinLeashPuppet>(get_class());
        }
    } // namespace SeinLeashPuppet
} // namespace app::classes::types
