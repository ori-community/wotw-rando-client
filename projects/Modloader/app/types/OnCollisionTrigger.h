#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnCollisionTrigger__Class.h>
#include <Modloader/app/structs/OnCollisionTrigger.h>

namespace app::classes::types {
    namespace OnCollisionTrigger {
        namespace {
            inline app::OnCollisionTrigger__Class* type_info_ref = nullptr;
        }
        inline app::OnCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::OnCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::OnCollisionTrigger__Class>(type_info, "", "OnCollisionTrigger");
        }
        inline app::OnCollisionTrigger* create() {
            return il2cpp::create_object<app::OnCollisionTrigger>(get_class());
        }
    } // namespace OnCollisionTrigger
} // namespace app::classes::types
