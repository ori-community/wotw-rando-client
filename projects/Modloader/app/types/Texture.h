#pragma once
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture__Array.h>
#include <Modloader/app/structs/Texture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Texture {
        inline app::Texture__Class** type_info() {
            static app::Texture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Texture__Class**)(modloader::win::memory::resolve_rva(0x0477E450));
            }
            return cache;
        }
        inline app::Texture__Class* get_class() {
            return il2cpp::get_class<app::Texture__Class>(type_info(), "UnityEngine", "Texture");
        }
        inline app::Texture* create() {
            return il2cpp::create_object<app::Texture>(get_class());
        }
        inline app::Texture__Array* create_array(int size) {
            return il2cpp::array_new<app::Texture__Array>(get_class(), size);
        }
        inline app::Texture__Array* create_array(const std::vector<app::Texture*>& items) {
            return il2cpp::array_new<app::Texture__Array>(get_class(), items);
        }
    } // namespace Texture
} // namespace app::classes::types
