#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCFont_Char {
        inline app::CCFont_Char__Class** type_info = (app::CCFont_Char__Class**)(modloader::win::memory::resolve_rva(0x047074C8));
        inline app::CCFont_Char__Class* get_class() {
            return il2cpp::get_nested_class<app::CCFont_Char__Class>(type_info, "", "CCFont", "Char");
        }
        inline app::CCFont_Char* create() {
            return il2cpp::create_object<app::CCFont_Char>(get_class());
        }
        inline app::CCFont_Char__Array* create_array(int size) {
            return il2cpp::array_new<app::CCFont_Char__Array>(get_class(), size);
        }
        inline app::CCFont_Char__Array* create_array(const std::vector<app::CCFont_Char*>& items) {
            return il2cpp::array_new<app::CCFont_Char__Array>(get_class(), items);
        }
    } // namespace CCFont_Char
} // namespace app::classes::types
