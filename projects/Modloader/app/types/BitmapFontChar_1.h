#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BitmapFontChar_1__Class.h>
#include <Modloader/app/structs/BitmapFontChar_1.h>
#include <Modloader/app/structs/BitmapFontChar_1__Array.h>

namespace app::classes::types {
    namespace BitmapFontChar_1 {
        inline app::BitmapFontChar_1__Class** type_info = (app::BitmapFontChar_1__Class**)(modloader::win::memory::resolve_rva(0x0474B588));
        inline app::BitmapFontChar_1__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar_1__Class>(type_info, "Moon.UI", "BitmapFontChar");
        }
        inline app::BitmapFontChar_1* create() {
            return il2cpp::create_object<app::BitmapFontChar_1>(get_class());
        }
        inline app::BitmapFontChar_1__Array* create_array(int size) {
            return il2cpp::array_new<app::BitmapFontChar_1__Array>(get_class(), size);
        }
        inline app::BitmapFontChar_1__Array* create_array(const std::vector<app::BitmapFontChar_1*>& items) {
            return il2cpp::array_new<app::BitmapFontChar_1__Array>(get_class(), items);
        }
    } // namespace BitmapFontChar_1
} // namespace app::classes::types
