#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Tokenizer_TokenSource__Enum {
        namespace {
            inline app::Tokenizer_TokenSource__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Tokenizer_TokenSource__Enum__Class** type_info = &type_info_ref;
        inline app::Tokenizer_TokenSource__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tokenizer_TokenSource__Enum__Class>(type_info, "System.Security.Util", "Tokenizer", "TokenSource");
        }
        inline app::Tokenizer_TokenSource__Enum* create() {
            return il2cpp::create_object<app::Tokenizer_TokenSource__Enum>(get_class());
        }
    } // namespace Tokenizer_TokenSource__Enum
} // namespace app::classes::types
