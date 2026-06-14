#pragma once
#include <Modloader/app/structs/AutoScrollTexture.h>
#include <Modloader/app/structs/AutoScrollTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoScrollTexture {
        inline app::AutoScrollTexture__Class** type_info() {
            static app::AutoScrollTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AutoScrollTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AutoScrollTexture__Class* get_class() {
            return il2cpp::get_class<app::AutoScrollTexture__Class>(type_info(), "", "AutoScrollTexture");
        }
        inline app::AutoScrollTexture* create() {
            return il2cpp::create_object<app::AutoScrollTexture>(get_class());
        }
    } // namespace AutoScrollTexture
} // namespace app::classes::types
