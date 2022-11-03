#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowHintEntity {
        namespace {
            inline app::ShowHintEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowHintEntity__Class** type_info = &type_info_ref;
        inline app::ShowHintEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowHintEntity__Class>(type_info, "Moon.Timeline", "ShowHintEntity");
        }
        inline app::ShowHintEntity* create() {
            return il2cpp::create_object<app::ShowHintEntity>(get_class());
        }
    } // namespace ShowHintEntity
} // namespace app::classes::types
