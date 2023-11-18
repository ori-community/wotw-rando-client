#pragma once
#include <Modloader/app/structs/Font.h>
#include <Modloader/app/structs/Font__Array.h>
#include <Modloader/app/structs/Font__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Font {
        inline app::Font__Class** type_info() {
            static app::Font__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Font__Class**)(modloader::win::memory::resolve_rva(0x0471EB38));
            }
            return cache;
        }
        inline app::Font__Class* get_class() {
            return il2cpp::get_class<app::Font__Class>(type_info(), "UnityEngine", "Font");
        }
        inline app::Font* create() {
            return il2cpp::create_object<app::Font>(get_class());
        }
        inline app::Font__Array* create_array(int size) {
            return il2cpp::array_new<app::Font__Array>(get_class(), size);
        }
        inline app::Font__Array* create_array(const std::vector<app::Font*>& items) {
            return il2cpp::array_new<app::Font__Array>(get_class(), items);
        }
    } // namespace Font
} // namespace app::classes::types
