#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_normalizedStringV1Compat__Class.h>
#include <Modloader/app/structs/Datatype_normalizedStringV1Compat.h>

namespace app::classes::types {
    namespace Datatype_normalizedStringV1Compat {
        inline app::Datatype_normalizedStringV1Compat__Class** type_info = (app::Datatype_normalizedStringV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04722EB0));
        inline app::Datatype_normalizedStringV1Compat__Class* get_class() {
            return il2cpp::get_class<app::Datatype_normalizedStringV1Compat__Class>(type_info, "System.Xml.Schema", "Datatype_normalizedStringV1Compat");
        }
        inline app::Datatype_normalizedStringV1Compat* create() {
            return il2cpp::create_object<app::Datatype_normalizedStringV1Compat>(get_class());
        }
    } // namespace Datatype_normalizedStringV1Compat
} // namespace app::classes::types
