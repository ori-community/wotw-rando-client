#pragma once
#include <Modloader/app/structs/AtlasSpriteTextureBinder.h>
#include <Modloader/app/structs/AtlasSpriteTextureBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTextureBinder {
        inline app::AtlasSpriteTextureBinder__Class** type_info() {
            static app::AtlasSpriteTextureBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AtlasSpriteTextureBinder__Class**)(modloader::win::memory::resolve_rva(0x0472E610));
            }
            return cache;
        }
        inline app::AtlasSpriteTextureBinder__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTextureBinder__Class>(type_info(), "", "AtlasSpriteTextureBinder");
        }
        inline app::AtlasSpriteTextureBinder* create() {
            return il2cpp::create_object<app::AtlasSpriteTextureBinder>(get_class());
        }
    } // namespace AtlasSpriteTextureBinder
} // namespace app::classes::types
