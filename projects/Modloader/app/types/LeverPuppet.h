#pragma once
#include <Modloader/app/structs/LeverPuppet.h>
#include <Modloader/app/structs/LeverPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeverPuppet {
        inline app::LeverPuppet__Class** type_info() {
            static app::LeverPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LeverPuppet__Class**)(modloader::win::memory::resolve_rva(0x0473D240));
            }
            return cache;
        }
        inline app::LeverPuppet__Class* get_class() {
            return il2cpp::get_class<app::LeverPuppet__Class>(type_info(), "", "LeverPuppet");
        }
        inline app::LeverPuppet* create() {
            return il2cpp::create_object<app::LeverPuppet>(get_class());
        }
    } // namespace LeverPuppet
} // namespace app::classes::types
