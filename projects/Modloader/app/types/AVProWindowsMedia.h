#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AVProWindowsMedia {
        inline app::AVProWindowsMedia__Class** type_info = (app::AVProWindowsMedia__Class**)(modloader::win::memory::resolve_rva(0x04781560));
        inline app::AVProWindowsMedia__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMedia__Class>(type_info, "", "AVProWindowsMedia");
        }
        inline app::AVProWindowsMedia* create() {
            return il2cpp::create_object<app::AVProWindowsMedia>(get_class());
        }
    } // namespace AVProWindowsMedia
} // namespace app::classes::types
