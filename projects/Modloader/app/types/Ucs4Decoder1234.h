#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Ucs4Decoder1234__Class.h>
#include <Modloader/app/structs/Ucs4Decoder1234.h>

namespace app::classes::types {
    namespace Ucs4Decoder1234 {
        inline app::Ucs4Decoder1234__Class** type_info = (app::Ucs4Decoder1234__Class**)(modloader::win::memory::resolve_rva(0x04784530));
        inline app::Ucs4Decoder1234__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder1234__Class>(type_info, "System.Xml", "Ucs4Decoder1234");
        }
        inline app::Ucs4Decoder1234* create() {
            return il2cpp::create_object<app::Ucs4Decoder1234>(get_class());
        }
    } // namespace Ucs4Decoder1234
} // namespace app::classes::types
