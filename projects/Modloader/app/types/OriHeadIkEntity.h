#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriHeadIkEntity {
        namespace {
            inline app::OriHeadIkEntity__Class* type_info_ref = nullptr;
        }
        inline app::OriHeadIkEntity__Class** type_info = &type_info_ref;
        inline app::OriHeadIkEntity__Class* get_class() {
            return il2cpp::get_class<app::OriHeadIkEntity__Class>(type_info, "Moon.Timeline", "OriHeadIkEntity");
        }
        inline app::OriHeadIkEntity* create() {
            return il2cpp::create_object<app::OriHeadIkEntity>(get_class());
        }
    } // namespace OriHeadIkEntity
} // namespace app::classes::types
