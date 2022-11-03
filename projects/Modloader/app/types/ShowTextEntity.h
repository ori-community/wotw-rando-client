#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowTextEntity {
        namespace {
            inline app::ShowTextEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowTextEntity__Class** type_info = &type_info_ref;
        inline app::ShowTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowTextEntity__Class>(type_info, "Moon.Timeline", "ShowTextEntity");
        }
        inline app::ShowTextEntity* create() {
            return il2cpp::create_object<app::ShowTextEntity>(get_class());
        }
        inline app::ShowTextEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::ShowTextEntity__Array>(get_class(), size);
        }
        inline app::ShowTextEntity__Array* create_array(const std::vector<app::ShowTextEntity*>& items) {
            return il2cpp::array_new<app::ShowTextEntity__Array>(get_class(), items);
        }
    } // namespace ShowTextEntity
} // namespace app::classes::types
