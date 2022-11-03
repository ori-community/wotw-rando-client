#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MarkerEntity {
        namespace {
            inline app::MarkerEntity__Class* type_info_ref = nullptr;
        }
        inline app::MarkerEntity__Class** type_info = &type_info_ref;
        inline app::MarkerEntity__Class* get_class() {
            return il2cpp::get_class<app::MarkerEntity__Class>(type_info, "Moon.Timeline", "MarkerEntity");
        }
        inline app::MarkerEntity* create() {
            return il2cpp::create_object<app::MarkerEntity>(get_class());
        }
    } // namespace MarkerEntity
} // namespace app::classes::types
