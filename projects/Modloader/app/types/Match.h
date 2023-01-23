#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Match__Class.h>
#include <Modloader/app/structs/Match.h>

namespace app::classes::types {
    namespace Match {
        inline app::Match__Class** type_info = (app::Match__Class**)(modloader::win::memory::resolve_rva(0x04751F98));
        inline app::Match__Class* get_class() {
            return il2cpp::get_class<app::Match__Class>(type_info, "System.Text.RegularExpressions", "Match");
        }
        inline app::Match* create() {
            return il2cpp::create_object<app::Match>(get_class());
        }
    } // namespace Match
} // namespace app::classes::types
