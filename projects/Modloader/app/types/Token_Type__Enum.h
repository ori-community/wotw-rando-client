#pragma once
#include <Modloader/app/structs/Token_Type__Enum.h>
#include <Modloader/app/structs/Token_Type__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Token_Type__Enum {
        inline app::Token_Type__Enum__Class** type_info() {
            static app::Token_Type__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Token_Type__Enum__Class**)(modloader::win::memory::resolve_rva(0x04717BD0));
            }
            return cache;
        }
        inline app::Token_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Token_Type__Enum__Class>(type_info(), "System.Net.Http.Headers", "Token", "Type");
        }
        inline app::Token_Type__Enum* create() {
            return il2cpp::create_object<app::Token_Type__Enum>(get_class());
        }
    } // namespace Token_Type__Enum
} // namespace app::classes::types
