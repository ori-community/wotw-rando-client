#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ucs4Decoder4321 {
        inline app::Ucs4Decoder4321__Class** type_info = (app::Ucs4Decoder4321__Class**)(modloader::win::memory::resolve_rva(0x04786828));
        inline app::Ucs4Decoder4321__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder4321__Class>(type_info, "System.Xml", "Ucs4Decoder4321");
        }
        inline app::Ucs4Decoder4321* create() {
            return il2cpp::create_object<app::Ucs4Decoder4321>(get_class());
        }
    } // namespace Ucs4Decoder4321
} // namespace app::classes::types
