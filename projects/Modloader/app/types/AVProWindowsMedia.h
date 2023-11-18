#pragma once
#include <Modloader/app/structs/AVProWindowsMedia.h>
#include <Modloader/app/structs/AVProWindowsMedia__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AVProWindowsMedia {
        inline app::AVProWindowsMedia__Class** type_info() {
            static app::AVProWindowsMedia__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AVProWindowsMedia__Class**)(modloader::win::memory::resolve_rva(0x04781560));
            }
            return cache;
        }
        inline app::AVProWindowsMedia__Class* get_class() {
            return il2cpp::get_class<app::AVProWindowsMedia__Class>(type_info(), "", "AVProWindowsMedia");
        }
        inline app::AVProWindowsMedia* create() {
            return il2cpp::create_object<app::AVProWindowsMedia>(get_class());
        }
    } // namespace AVProWindowsMedia
} // namespace app::classes::types
