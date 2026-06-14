#pragma once
#include <Modloader/app/structs/Char.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Char__Boxed.h>
#include <Modloader/app/structs/Char__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Char {
        inline app::Char__Class** type_info() {
            static app::Char__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Char__Class**)(modloader::win::memory::resolve_rva(0x04707EA8));
            }
            return cache;
        }
        inline app::Char__Class* get_class() {
            return il2cpp::get_class<app::Char__Class>(type_info(), "System", "Char");
        }
        inline app::Char* create() {
            return il2cpp::create_object<app::Char>(get_class());
        }
        inline app::Char__Boxed* box(char16_t value) {
            return il2cpp::box_value<app::Char__Boxed>(get_class(), value);
        }
        inline app::Char__Array* create_array(int size) {
            return il2cpp::array_new<app::Char__Array>(get_class(), size);
        }
        inline app::Char__Array* create_array(const std::vector<char16_t>& items) {
            return il2cpp::array_new<app::Char__Array>(get_class(), items);
        }
    } // namespace Char
} // namespace app::classes::types
