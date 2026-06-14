#pragma once
#include <Modloader/app/structs/SeinRunPuppet.h>
#include <Modloader/app/structs/SeinRunPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinRunPuppet {
        inline app::SeinRunPuppet__Class** type_info() {
            static app::SeinRunPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinRunPuppet__Class**)(modloader::win::memory::resolve_rva(0x0471CEE8));
            }
            return cache;
        }
        inline app::SeinRunPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinRunPuppet__Class>(type_info(), "", "SeinRunPuppet");
        }
        inline app::SeinRunPuppet* create() {
            return il2cpp::create_object<app::SeinRunPuppet>(get_class());
        }
    } // namespace SeinRunPuppet
} // namespace app::classes::types
