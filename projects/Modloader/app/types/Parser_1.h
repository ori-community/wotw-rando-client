#pragma once
#include <Modloader/app/structs/Parser_1.h>
#include <Modloader/app/structs/Parser_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Parser_1 {
        inline app::Parser_1__Class** type_info() {
            static app::Parser_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Parser_1__Class**)(modloader::win::memory::resolve_rva(0x0474CC40));
            }
            return cache;
        }
        inline app::Parser_1__Class* get_class() {
            return il2cpp::get_class<app::Parser_1__Class>(type_info(), "System.Xml.Schema", "Parser");
        }
        inline app::Parser_1* create() {
            return il2cpp::create_object<app::Parser_1>(get_class());
        }
    } // namespace Parser_1
} // namespace app::classes::types
