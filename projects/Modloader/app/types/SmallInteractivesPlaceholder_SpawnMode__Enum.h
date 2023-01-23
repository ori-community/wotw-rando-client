#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder_SpawnMode__Enum__Class.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder_SpawnMode__Enum.h>

namespace app::classes::types {
    namespace SmallInteractivesPlaceholder_SpawnMode__Enum {
        inline app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class** type_info = (app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475F180));
        inline app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SmallInteractivesPlaceholder_SpawnMode__Enum__Class>(type_info, "", "SmallInteractivesPlaceholder", "SpawnMode");
        }
        inline app::SmallInteractivesPlaceholder_SpawnMode__Enum* create() {
            return il2cpp::create_object<app::SmallInteractivesPlaceholder_SpawnMode__Enum>(get_class());
        }
    } // namespace SmallInteractivesPlaceholder_SpawnMode__Enum
} // namespace app::classes::types
