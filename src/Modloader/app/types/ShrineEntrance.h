#pragma once
#include <Modloader/app/structs/ShrineEntrance.h>
#include <Modloader/app/structs/ShrineEntrance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineEntrance {
        inline app::ShrineEntrance__Class** type_info() {
            static app::ShrineEntrance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShrineEntrance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShrineEntrance__Class* get_class() {
            return il2cpp::get_class<app::ShrineEntrance__Class>(type_info(), "", "ShrineEntrance");
        }
        inline app::ShrineEntrance* create() {
            return il2cpp::create_object<app::ShrineEntrance>(get_class());
        }
    } // namespace ShrineEntrance
} // namespace app::classes::types
