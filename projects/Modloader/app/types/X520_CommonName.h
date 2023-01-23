#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X520_CommonName__Class.h>
#include <Modloader/app/structs/X520_CommonName.h>

namespace app::classes::types {
    namespace X520_CommonName {
        inline app::X520_CommonName__Class** type_info = (app::X520_CommonName__Class**)(modloader::win::memory::resolve_rva(0x047715C8));
        inline app::X520_CommonName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_CommonName__Class>(type_info, "Mono.Security.X509", "X520", "CommonName");
        }
        inline app::X520_CommonName* create() {
            return il2cpp::create_object<app::X520_CommonName>(get_class());
        }
    } // namespace X520_CommonName
} // namespace app::classes::types
