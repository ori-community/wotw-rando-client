#pragma once
#include <Modloader/app/structs/MovieTexture.h>
#include <Modloader/app/structs/MovieTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovieTexture {
        inline app::MovieTexture__Class** type_info() {
            static app::MovieTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MovieTexture__Class**)(modloader::win::memory::resolve_rva(0x0475F3D0));
            }
            return cache;
        }
        inline app::MovieTexture__Class* get_class() {
            return il2cpp::get_class<app::MovieTexture__Class>(type_info(), "UnityEngine", "MovieTexture");
        }
        inline app::MovieTexture* create() {
            return il2cpp::create_object<app::MovieTexture>(get_class());
        }
    } // namespace MovieTexture
} // namespace app::classes::types
