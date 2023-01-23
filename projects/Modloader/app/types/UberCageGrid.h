#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberCageGrid__Class.h>
#include <Modloader/app/structs/UberCageGrid.h>

namespace app::classes::types {
    namespace UberCageGrid {
        namespace {
            inline app::UberCageGrid__Class* type_info_ref = nullptr;
        }
        inline app::UberCageGrid__Class** type_info = &type_info_ref;
        inline app::UberCageGrid__Class* get_class() {
            return il2cpp::get_class<app::UberCageGrid__Class>(type_info, "", "UberCageGrid");
        }
        inline app::UberCageGrid* create() {
            return il2cpp::create_object<app::UberCageGrid>(get_class());
        }
    } // namespace UberCageGrid
} // namespace app::classes::types
