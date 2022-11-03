#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinUIEntity {
        namespace {
            inline app::SeinUIEntity__Class* type_info_ref = nullptr;
        }
        inline app::SeinUIEntity__Class** type_info = &type_info_ref;
        inline app::SeinUIEntity__Class* get_class() {
            return il2cpp::get_class<app::SeinUIEntity__Class>(type_info, "Moon.Timeline", "SeinUIEntity");
        }
        inline app::SeinUIEntity* create() {
            return il2cpp::create_object<app::SeinUIEntity>(get_class());
        }
    } // namespace SeinUIEntity
} // namespace app::classes::types
