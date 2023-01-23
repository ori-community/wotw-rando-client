#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X520_DnQualifier__Class.h>
#include <Modloader/app/structs/X520_DnQualifier.h>

namespace app::classes::types {
    namespace X520_DnQualifier {
        inline app::X520_DnQualifier__Class** type_info = (app::X520_DnQualifier__Class**)(modloader::win::memory::resolve_rva(0x047886C8));
        inline app::X520_DnQualifier__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_DnQualifier__Class>(type_info, "Mono.Security.X509", "X520", "DnQualifier");
        }
        inline app::X520_DnQualifier* create() {
            return il2cpp::create_object<app::X520_DnQualifier>(get_class());
        }
    } // namespace X520_DnQualifier
} // namespace app::classes::types
