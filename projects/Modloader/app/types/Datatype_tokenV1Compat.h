#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_tokenV1Compat__Class.h>
#include <Modloader/app/structs/Datatype_tokenV1Compat.h>

namespace app::classes::types {
    namespace Datatype_tokenV1Compat {
        inline app::Datatype_tokenV1Compat__Class** type_info = (app::Datatype_tokenV1Compat__Class**)(modloader::win::memory::resolve_rva(0x04735440));
        inline app::Datatype_tokenV1Compat__Class* get_class() {
            return il2cpp::get_class<app::Datatype_tokenV1Compat__Class>(type_info, "System.Xml.Schema", "Datatype_tokenV1Compat");
        }
        inline app::Datatype_tokenV1Compat* create() {
            return il2cpp::create_object<app::Datatype_tokenV1Compat>(get_class());
        }
    } // namespace Datatype_tokenV1Compat
} // namespace app::classes::types
