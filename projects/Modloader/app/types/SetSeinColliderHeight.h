#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetSeinColliderHeight__Class.h>
#include <Modloader/app/structs/SetSeinColliderHeight.h>

namespace app::classes::types {
    namespace SetSeinColliderHeight {
        namespace {
            inline app::SetSeinColliderHeight__Class* type_info_ref = nullptr;
        }
        inline app::SetSeinColliderHeight__Class** type_info = &type_info_ref;
        inline app::SetSeinColliderHeight__Class* get_class() {
            return il2cpp::get_class<app::SetSeinColliderHeight__Class>(type_info, "", "SetSeinColliderHeight");
        }
        inline app::SetSeinColliderHeight* create() {
            return il2cpp::create_object<app::SetSeinColliderHeight>(get_class());
        }
    } // namespace SetSeinColliderHeight
} // namespace app::classes::types
