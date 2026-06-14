#pragma once
#include <Modloader/app/structs/RegexCharClass.h>
#include <Modloader/app/structs/RegexCharClass__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegexCharClass {
        inline app::RegexCharClass__Class** type_info() {
            static app::RegexCharClass__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegexCharClass__Class**)(modloader::win::memory::resolve_rva(0x047968B8));
            }
            return cache;
        }
        inline app::RegexCharClass__Class* get_class() {
            return il2cpp::get_class<app::RegexCharClass__Class>(type_info(), "System.Text.RegularExpressions", "RegexCharClass");
        }
        inline app::RegexCharClass* create() {
            return il2cpp::create_object<app::RegexCharClass>(get_class());
        }
    } // namespace RegexCharClass
} // namespace app::classes::types
