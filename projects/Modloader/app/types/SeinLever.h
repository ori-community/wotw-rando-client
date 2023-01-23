#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinLever__Class.h>
#include <Modloader/app/structs/SeinLever.h>

namespace app::classes::types {
    namespace SeinLever {
        namespace {
            inline app::SeinLever__Class* type_info_ref = nullptr;
        }
        inline app::SeinLever__Class** type_info = &type_info_ref;
        inline app::SeinLever__Class* get_class() {
            return il2cpp::get_class<app::SeinLever__Class>(type_info, "", "SeinLever");
        }
        inline app::SeinLever* create() {
            return il2cpp::create_object<app::SeinLever>(get_class());
        }
    } // namespace SeinLever
} // namespace app::classes::types
