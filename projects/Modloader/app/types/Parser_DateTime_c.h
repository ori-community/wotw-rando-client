#pragma once
#include <Modloader/app/structs/Parser_DateTime_c.h>
#include <Modloader/app/structs/Parser_DateTime_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Parser_DateTime_c {
        inline app::Parser_DateTime_c__Class** type_info() {
            static app::Parser_DateTime_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Parser_DateTime_c__Class**)(modloader::win::memory::resolve_rva(0x04778CA0));
            }
            return cache;
        }
        inline app::Parser_DateTime_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_DateTime_c__Class>(type_info(), "System.Net.Http.Headers", "Parser+DateTime", "<>c");
        }
        inline app::Parser_DateTime_c* create() {
            return il2cpp::create_object<app::Parser_DateTime_c>(get_class());
        }
    } // namespace Parser_DateTime_c
} // namespace app::classes::types
