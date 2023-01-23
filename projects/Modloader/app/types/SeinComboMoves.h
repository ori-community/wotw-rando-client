#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinComboMoves__Class.h>
#include <Modloader/app/structs/SeinComboMoves.h>

namespace app::classes::types {
    namespace SeinComboMoves {
        namespace {
            inline app::SeinComboMoves__Class* type_info_ref = nullptr;
        }
        inline app::SeinComboMoves__Class** type_info = &type_info_ref;
        inline app::SeinComboMoves__Class* get_class() {
            return il2cpp::get_class<app::SeinComboMoves__Class>(type_info, "", "SeinComboMoves");
        }
        inline app::SeinComboMoves* create() {
            return il2cpp::create_object<app::SeinComboMoves>(get_class());
        }
    } // namespace SeinComboMoves
} // namespace app::classes::types
