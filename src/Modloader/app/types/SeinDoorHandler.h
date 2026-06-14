#pragma once
#include <Modloader/app/structs/SeinDoorHandler.h>
#include <Modloader/app/structs/SeinDoorHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDoorHandler {
        inline app::SeinDoorHandler__Class** type_info() {
            static app::SeinDoorHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinDoorHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinDoorHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinDoorHandler__Class>(type_info(), "", "SeinDoorHandler");
        }
        inline app::SeinDoorHandler* create() {
            return il2cpp::create_object<app::SeinDoorHandler>(get_class());
        }
    } // namespace SeinDoorHandler
} // namespace app::classes::types
