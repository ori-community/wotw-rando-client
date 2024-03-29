#pragma once
#include <Modloader/app/structs/Parser_MD5_c.h>
#include <Modloader/app/structs/Parser_MD5_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Parser_MD5_c {
        inline app::Parser_MD5_c__Class** type_info() {
            static app::Parser_MD5_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Parser_MD5_c__Class**)(modloader::win::memory::resolve_rva(0x0475F430));
            }
            return cache;
        }
        inline app::Parser_MD5_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Parser_MD5_c__Class>(type_info(), "System.Net.Http.Headers", "Parser+MD5", "<>c");
        }
        inline app::Parser_MD5_c* create() {
            return il2cpp::create_object<app::Parser_MD5_c>(get_class());
        }
    } // namespace Parser_MD5_c
} // namespace app::classes::types
