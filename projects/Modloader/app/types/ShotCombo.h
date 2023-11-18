#pragma once
#include <Modloader/app/structs/ShotCombo.h>
#include <Modloader/app/structs/ShotCombo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShotCombo {
        inline app::ShotCombo__Class** type_info() {
            static app::ShotCombo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShotCombo__Class**)(modloader::win::memory::resolve_rva(0x04786898));
            }
            return cache;
        }
        inline app::ShotCombo__Class* get_class() {
            return il2cpp::get_class<app::ShotCombo__Class>(type_info(), "", "ShotCombo");
        }
        inline app::ShotCombo* create() {
            return il2cpp::create_object<app::ShotCombo>(get_class());
        }
    } // namespace ShotCombo
} // namespace app::classes::types
