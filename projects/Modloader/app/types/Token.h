#pragma once
#include <Modloader/app/structs/Token.h>
#include <Modloader/app/structs/Token__Boxed.h>
#include <Modloader/app/structs/Token__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Token {
        inline app::Token__Class** type_info() {
            static app::Token__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Token__Class**)(modloader::win::memory::resolve_rva(0x04704E30));
            }
            return cache;
        }
        inline app::Token__Class* get_class() {
            return il2cpp::get_class<app::Token__Class>(type_info(), "System.Net.Http.Headers", "Token");
        }
        inline app::Token* create() {
            return il2cpp::create_object<app::Token>(get_class());
        }
        inline app::Token__Boxed* box(app::Token value) {
            return il2cpp::box_value<app::Token__Boxed>(get_class(), value);
        }
    } // namespace Token
} // namespace app::classes::types
