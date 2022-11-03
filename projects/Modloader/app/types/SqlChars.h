#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SqlChars {
        inline app::SqlChars__Class** type_info = (app::SqlChars__Class**)(modloader::win::memory::resolve_rva(0x0478B4F8));
        inline app::SqlChars__Class* get_class() {
            return il2cpp::get_class<app::SqlChars__Class>(type_info, "System.Data.SqlTypes", "SqlChars");
        }
        inline app::SqlChars* create() {
            return il2cpp::create_object<app::SqlChars>(get_class());
        }
        inline app::SqlChars__Array* create_array(int size) {
            return il2cpp::array_new<app::SqlChars__Array>(get_class(), size);
        }
        inline app::SqlChars__Array* create_array(const std::vector<app::SqlChars*>& items) {
            return il2cpp::array_new<app::SqlChars__Array>(get_class(), items);
        }
    } // namespace SqlChars
} // namespace app::classes::types
