#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BitmapFontChar__Array__Class.h>
#include <Modloader/app/structs/BitmapFontChar__Array.h>

namespace app::classes::types {
    namespace BitmapFontChar__Array {
        namespace {
            inline app::BitmapFontChar__Array__Class* type_info_ref = nullptr;
        }
        inline app::BitmapFontChar__Array__Class** type_info = &type_info_ref;
        inline app::BitmapFontChar__Array__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar__Array__Class>(type_info, "CatlikeCoding.TextBox", "BitmapFontChar[]");
        }
        inline app::BitmapFontChar__Array* create() {
            return il2cpp::create_object<app::BitmapFontChar__Array>(get_class());
        }
    } // namespace BitmapFontChar__Array
} // namespace app::classes::types
