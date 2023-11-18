#pragma once
#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/structs/TextureFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureFormat__Enum {
        inline app::TextureFormat__Enum__Class** type_info() {
            static app::TextureFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureFormat__Enum__Class**)(modloader::win::memory::resolve_rva(0x04796E80));
            }
            return cache;
        }
        inline app::TextureFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextureFormat__Enum__Class>(type_info(), "UnityEngine", "TextureFormat");
        }
        inline app::TextureFormat__Enum* create() {
            return il2cpp::create_object<app::TextureFormat__Enum>(get_class());
        }
    } // namespace TextureFormat__Enum
} // namespace app::classes::types
