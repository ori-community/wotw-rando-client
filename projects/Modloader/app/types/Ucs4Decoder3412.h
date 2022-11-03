#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ucs4Decoder3412 {
        inline app::Ucs4Decoder3412__Class** type_info = (app::Ucs4Decoder3412__Class**)(modloader::win::memory::resolve_rva(0x0473E030));
        inline app::Ucs4Decoder3412__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder3412__Class>(type_info, "System.Xml", "Ucs4Decoder3412");
        }
        inline app::Ucs4Decoder3412* create() {
            return il2cpp::create_object<app::Ucs4Decoder3412>(get_class());
        }
    } // namespace Ucs4Decoder3412
} // namespace app::classes::types
