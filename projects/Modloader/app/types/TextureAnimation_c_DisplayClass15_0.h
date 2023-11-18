#pragma once
#include <Modloader/app/structs/TextureAnimation_c_DisplayClass15_0.h>
#include <Modloader/app/structs/TextureAnimation_c_DisplayClass15_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimation_c_DisplayClass15_0 {
        inline app::TextureAnimation_c_DisplayClass15_0__Class** type_info() {
            static app::TextureAnimation_c_DisplayClass15_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TextureAnimation_c_DisplayClass15_0__Class**)(modloader::win::memory::resolve_rva(0x04790CB8));
            }
            return cache;
        }
        inline app::TextureAnimation_c_DisplayClass15_0__Class* get_class() {
            return il2cpp::get_nested_class<app::TextureAnimation_c_DisplayClass15_0__Class>(type_info(), "", "TextureAnimation", "<>c__DisplayClass15_0");
        }
        inline app::TextureAnimation_c_DisplayClass15_0* create() {
            return il2cpp::create_object<app::TextureAnimation_c_DisplayClass15_0>(get_class());
        }
    } // namespace TextureAnimation_c_DisplayClass15_0
} // namespace app::classes::types
