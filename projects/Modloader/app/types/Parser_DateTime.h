#pragma once
#include <Modloader/app/structs/Parser_DateTime.h>
#include <Modloader/app/structs/Parser_DateTime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Parser_DateTime {
        inline app::Parser_DateTime__Class** type_info() {
            static app::Parser_DateTime__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Parser_DateTime__Class**)(modloader::win::memory::resolve_rva(0x0471C8D0));
            }
            return cache;
        }
        inline app::Parser_DateTime__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_DateTime__Class>(type_info(), "System.Net.Http.Headers", "Parser", "DateTime");
        }
        inline app::Parser_DateTime* create() {
            return il2cpp::create_object<app::Parser_DateTime>(get_class());
        }
    } // namespace Parser_DateTime
} // namespace app::classes::types
