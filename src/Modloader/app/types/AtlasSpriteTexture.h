#pragma once
#include <Modloader/app/structs/AtlasSpriteTexture.h>
#include <Modloader/app/structs/AtlasSpriteTexture__Array.h>
#include <Modloader/app/structs/AtlasSpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AtlasSpriteTexture {
        inline app::AtlasSpriteTexture__Class** type_info() {
            static app::AtlasSpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AtlasSpriteTexture__Class**)(modloader::win::memory::resolve_rva(0x04794250));
            }
            return cache;
        }
        inline app::AtlasSpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::AtlasSpriteTexture__Class>(type_info(), "", "AtlasSpriteTexture");
        }
        inline app::AtlasSpriteTexture* create() {
            return il2cpp::create_object<app::AtlasSpriteTexture>(get_class());
        }
        inline app::AtlasSpriteTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::AtlasSpriteTexture__Array>(get_class(), size);
        }
        inline app::AtlasSpriteTexture__Array* create_array(const std::vector<app::AtlasSpriteTexture*>& items) {
            return il2cpp::array_new<app::AtlasSpriteTexture__Array>(get_class(), items);
        }
    } // namespace AtlasSpriteTexture
} // namespace app::classes::types
