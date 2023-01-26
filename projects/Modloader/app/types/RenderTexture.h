#pragma once
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTexture__Array.h>
#include <Modloader/app/structs/RenderTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RenderTexture {
        inline app::RenderTexture__Class** type_info() {
            static app::RenderTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RenderTexture__Class**)(modloader::win::memory::resolve_rva(0x047058F8));
            }
            return cache;
        }
        inline app::RenderTexture__Class* get_class() {
            return il2cpp::get_class<app::RenderTexture__Class>(type_info(), "UnityEngine", "RenderTexture");
        }
        inline app::RenderTexture* create() {
            return il2cpp::create_object<app::RenderTexture>(get_class());
        }
        inline app::RenderTexture__Array* create_array(int size) {
            return il2cpp::array_new<app::RenderTexture__Array>(get_class(), size);
        }
        inline app::RenderTexture__Array* create_array(const std::vector<app::RenderTexture*>& items) {
            return il2cpp::array_new<app::RenderTexture__Array>(get_class(), items);
        }
    } // namespace RenderTexture
} // namespace app::classes::types
