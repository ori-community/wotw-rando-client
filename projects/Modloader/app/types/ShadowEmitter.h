#pragma once
#include <Modloader/app/structs/ShadowEmitter.h>
#include <Modloader/app/structs/ShadowEmitter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadowEmitter {
        inline app::ShadowEmitter__Class** type_info() {
            static app::ShadowEmitter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadowEmitter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadowEmitter__Class* get_class() {
            return il2cpp::get_class<app::ShadowEmitter__Class>(type_info(), "", "ShadowEmitter");
        }
        inline app::ShadowEmitter* create() {
            return il2cpp::create_object<app::ShadowEmitter>(get_class());
        }
    } // namespace ShadowEmitter
} // namespace app::classes::types
