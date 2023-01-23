#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Enum_ValuesAndNames__Class.h>
#include <Modloader/app/structs/Enum_ValuesAndNames.h>

namespace app::classes::types {
    namespace Enum_ValuesAndNames {
        inline app::Enum_ValuesAndNames__Class** type_info = (app::Enum_ValuesAndNames__Class**)(modloader::win::memory::resolve_rva(0x0475D7C8));
        inline app::Enum_ValuesAndNames__Class* get_class() {
            return il2cpp::get_nested_class<app::Enum_ValuesAndNames__Class>(type_info, "System", "Enum", "ValuesAndNames");
        }
        inline app::Enum_ValuesAndNames* create() {
            return il2cpp::create_object<app::Enum_ValuesAndNames>(get_class());
        }
    } // namespace Enum_ValuesAndNames
} // namespace app::classes::types
