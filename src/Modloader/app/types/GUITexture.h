#pragma once
#include <Modloader/app/structs/GUITexture.h>
#include <Modloader/app/structs/GUITexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GUITexture {
        inline app::GUITexture__Class** type_info() {
            static app::GUITexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GUITexture__Class**)(modloader::win::memory::resolve_rva(0x0471C480));
            }
            return cache;
        }
        inline app::GUITexture__Class* get_class() {
            return il2cpp::get_class<app::GUITexture__Class>(type_info(), "UnityEngine", "GUITexture");
        }
        inline app::GUITexture* create() {
            return il2cpp::create_object<app::GUITexture>(get_class());
        }
    } // namespace GUITexture
} // namespace app::classes::types
