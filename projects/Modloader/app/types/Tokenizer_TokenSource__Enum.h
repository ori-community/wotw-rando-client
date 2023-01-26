#pragma once
#include <Modloader/app/structs/Tokenizer_TokenSource__Enum.h>
#include <Modloader/app/structs/Tokenizer_TokenSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokenizer_TokenSource__Enum {
        inline app::Tokenizer_TokenSource__Enum__Class** type_info() {
            static app::Tokenizer_TokenSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Tokenizer_TokenSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Tokenizer_TokenSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_TokenSource__Enum__Class>(type_info(), "System.Security.Util", "Tokenizer", "TokenSource");
        }
        inline app::Tokenizer_TokenSource__Enum* create() {
            return il2cpp::create_object<app::Tokenizer_TokenSource__Enum>(get_class());
        }
    } // namespace Tokenizer_TokenSource__Enum
} // namespace app::classes::types
