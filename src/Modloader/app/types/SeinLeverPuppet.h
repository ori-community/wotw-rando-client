#pragma once
#include <Modloader/app/structs/SeinLeverPuppet.h>
#include <Modloader/app/structs/SeinLeverPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLeverPuppet {
        inline app::SeinLeverPuppet__Class** type_info() {
            static app::SeinLeverPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinLeverPuppet__Class**)(modloader::win::memory::resolve_rva(0x04735F20));
            }
            return cache;
        }
        inline app::SeinLeverPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinLeverPuppet__Class>(type_info(), "", "SeinLeverPuppet");
        }
        inline app::SeinLeverPuppet* create() {
            return il2cpp::create_object<app::SeinLeverPuppet>(get_class());
        }
    } // namespace SeinLeverPuppet
} // namespace app::classes::types
