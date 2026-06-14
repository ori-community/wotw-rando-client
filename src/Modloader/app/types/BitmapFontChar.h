#pragma once
#include <Modloader/app/structs/BitmapFontChar.h>
#include <Modloader/app/structs/BitmapFontChar__Array.h>
#include <Modloader/app/structs/BitmapFontChar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitmapFontChar {
        inline app::BitmapFontChar__Class** type_info() {
            static app::BitmapFontChar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BitmapFontChar__Class**)(modloader::win::memory::resolve_rva(0x0473F820));
            }
            return cache;
        }
        inline app::BitmapFontChar__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar__Class>(type_info(), "CatlikeCoding.TextBox", "BitmapFontChar");
        }
        inline app::BitmapFontChar* create() {
            return il2cpp::create_object<app::BitmapFontChar>(get_class());
        }
        inline app::BitmapFontChar__Array* create_array(int size) {
            return il2cpp::array_new<app::BitmapFontChar__Array>(get_class(), size);
        }
        inline app::BitmapFontChar__Array* create_array(const std::vector<app::BitmapFontChar*>& items) {
            return il2cpp::array_new<app::BitmapFontChar__Array>(get_class(), items);
        }
    } // namespace BitmapFontChar
} // namespace app::classes::types
