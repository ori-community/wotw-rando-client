#pragma once
#include <Modloader/app/structs/LegacyBabySandWormNew_c.h>
#include <Modloader/app/structs/LegacyBabySandWormNew_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyBabySandWormNew_c {
        inline app::LegacyBabySandWormNew_c__Class** type_info() {
            static app::LegacyBabySandWormNew_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyBabySandWormNew_c__Class**)(modloader::win::memory::resolve_rva(0x0475E2A0));
            }
            return cache;
        }
        inline app::LegacyBabySandWormNew_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyBabySandWormNew_c__Class>(type_info(), "", "LegacyBabySandWormNew", "<>c");
        }
        inline app::LegacyBabySandWormNew_c* create() {
            return il2cpp::create_object<app::LegacyBabySandWormNew_c>(get_class());
        }
    } // namespace LegacyBabySandWormNew_c
} // namespace app::classes::types
