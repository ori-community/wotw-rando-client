#pragma once
#include <Modloader/app/structs/ZerofyWorldPosition.h>
#include <Modloader/app/structs/ZerofyWorldPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZerofyWorldPosition {
        inline app::ZerofyWorldPosition__Class** type_info() {
            static app::ZerofyWorldPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZerofyWorldPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZerofyWorldPosition__Class* get_class() {
            return il2cpp::get_class<app::ZerofyWorldPosition__Class>(type_info(), "", "ZerofyWorldPosition");
        }
        inline app::ZerofyWorldPosition* create() {
            return il2cpp::create_object<app::ZerofyWorldPosition>(get_class());
        }
    } // namespace ZerofyWorldPosition
} // namespace app::classes::types
