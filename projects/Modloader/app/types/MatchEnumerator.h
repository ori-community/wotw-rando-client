#pragma once
#include <Modloader/app/structs/MatchEnumerator.h>
#include <Modloader/app/structs/MatchEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MatchEnumerator {
        inline app::MatchEnumerator__Class** type_info() {
            static app::MatchEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MatchEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711090));
            }
            return cache;
        }
        inline app::MatchEnumerator__Class* get_class() {
            return il2cpp::get_class<app::MatchEnumerator__Class>(type_info(), "System.Text.RegularExpressions", "MatchEnumerator");
        }
        inline app::MatchEnumerator* create() {
            return il2cpp::create_object<app::MatchEnumerator>(get_class());
        }
    } // namespace MatchEnumerator
} // namespace app::classes::types
