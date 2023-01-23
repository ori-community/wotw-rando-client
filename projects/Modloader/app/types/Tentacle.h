#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tentacle__Class.h>
#include <Modloader/app/structs/Tentacle.h>

namespace app::classes::types {
    namespace Tentacle {
        namespace {
            inline app::Tentacle__Class* type_info_ref = nullptr;
        }
        inline app::Tentacle__Class** type_info = &type_info_ref;
        inline app::Tentacle__Class* get_class() {
            return il2cpp::get_class<app::Tentacle__Class>(type_info, "", "Tentacle");
        }
        inline app::Tentacle* create() {
            return il2cpp::create_object<app::Tentacle>(get_class());
        }
    } // namespace Tentacle
} // namespace app::classes::types
