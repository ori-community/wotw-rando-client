#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Toad__Class.h>
#include <Modloader/app/structs/Toad.h>

namespace app::classes::types {
    namespace Toad {
        namespace {
            inline app::Toad__Class* type_info_ref = nullptr;
        }
        inline app::Toad__Class** type_info = &type_info_ref;
        inline app::Toad__Class* get_class() {
            return il2cpp::get_class<app::Toad__Class>(type_info, "", "Toad");
        }
        inline app::Toad* create() {
            return il2cpp::create_object<app::Toad>(get_class());
        }
    } // namespace Toad
} // namespace app::classes::types
