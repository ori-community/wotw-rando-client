#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Ucs4Encoding1234__Class.h>
#include <Modloader/app/structs/Ucs4Encoding1234.h>

namespace app::classes::types {
    namespace Ucs4Encoding1234 {
        inline app::Ucs4Encoding1234__Class** type_info = (app::Ucs4Encoding1234__Class**)(modloader::win::memory::resolve_rva(0x04792B98));
        inline app::Ucs4Encoding1234__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Encoding1234__Class>(type_info, "System.Xml", "Ucs4Encoding1234");
        }
        inline app::Ucs4Encoding1234* create() {
            return il2cpp::create_object<app::Ucs4Encoding1234>(get_class());
        }
    } // namespace Ucs4Encoding1234
} // namespace app::classes::types
