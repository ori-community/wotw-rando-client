#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MatchEnumerator__Class.h>
#include <Modloader/app/structs/MatchEnumerator.h>

namespace app::classes::types {
    namespace MatchEnumerator {
        inline app::MatchEnumerator__Class** type_info = (app::MatchEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711090));
        inline app::MatchEnumerator__Class* get_class() {
            return il2cpp::get_class<app::MatchEnumerator__Class>(type_info, "System.Text.RegularExpressions", "MatchEnumerator");
        }
        inline app::MatchEnumerator* create() {
            return il2cpp::create_object<app::MatchEnumerator>(get_class());
        }
    } // namespace MatchEnumerator
} // namespace app::classes::types
