#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceContentType__Enum__Class.h>
#include <Modloader/app/structs/RaceContentType__Enum.h>

namespace app::classes::types {
    namespace RaceContentType__Enum {
        inline app::RaceContentType__Enum__Class** type_info = (app::RaceContentType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04720F78));
        inline app::RaceContentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceContentType__Enum__Class>(type_info, "", "RaceContentType");
        }
        inline app::RaceContentType__Enum* create() {
            return il2cpp::create_object<app::RaceContentType__Enum>(get_class());
        }
    } // namespace RaceContentType__Enum
} // namespace app::classes::types
