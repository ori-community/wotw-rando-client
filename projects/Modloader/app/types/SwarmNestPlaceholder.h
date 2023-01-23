#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwarmNestPlaceholder__Class.h>
#include <Modloader/app/structs/SwarmNestPlaceholder.h>

namespace app::classes::types {
    namespace SwarmNestPlaceholder {
        namespace {
            inline app::SwarmNestPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SwarmNestPlaceholder__Class** type_info = &type_info_ref;
        inline app::SwarmNestPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SwarmNestPlaceholder__Class>(type_info, "", "SwarmNestPlaceholder");
        }
        inline app::SwarmNestPlaceholder* create() {
            return il2cpp::create_object<app::SwarmNestPlaceholder>(get_class());
        }
    } // namespace SwarmNestPlaceholder
} // namespace app::classes::types
