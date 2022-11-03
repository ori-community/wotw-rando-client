#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MapmakerUIDetails {
        namespace {
            inline app::MapmakerUIDetails__Class* type_info_ref = nullptr;
        }
        inline app::MapmakerUIDetails__Class** type_info = &type_info_ref;
        inline app::MapmakerUIDetails__Class* get_class() {
            return il2cpp::get_class<app::MapmakerUIDetails__Class>(type_info, "", "MapmakerUIDetails");
        }
        inline app::MapmakerUIDetails* create() {
            return il2cpp::create_object<app::MapmakerUIDetails>(get_class());
        }
    } // namespace MapmakerUIDetails
} // namespace app::classes::types
