#pragma once
#include <Modloader/app/structs/Tokenizer.h>
#include <Modloader/app/structs/Tokenizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tokenizer {
        inline app::Tokenizer__Class** type_info() {
            static app::Tokenizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tokenizer__Class**)(modloader::win::memory::resolve_rva(0x04791D00));
            }
            return cache;
        }
        inline app::Tokenizer__Class* get_class() {
            return il2cpp::get_class<app::Tokenizer__Class>(type_info(), "System.Security.Util", "Tokenizer");
        }
        inline app::Tokenizer* create() {
            return il2cpp::create_object<app::Tokenizer>(get_class());
        }
    } // namespace Tokenizer
} // namespace app::classes::types
