#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericCollisionTrigger__Class.h>
#include <Modloader/app/structs/GenericCollisionTrigger.h>

namespace app::classes::types {
    namespace GenericCollisionTrigger {
        namespace {
            inline app::GenericCollisionTrigger__Class* type_info_ref = nullptr;
        }
        inline app::GenericCollisionTrigger__Class** type_info = &type_info_ref;
        inline app::GenericCollisionTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericCollisionTrigger__Class>(type_info, "", "GenericCollisionTrigger");
        }
        inline app::GenericCollisionTrigger* create() {
            return il2cpp::create_object<app::GenericCollisionTrigger>(get_class());
        }
    } // namespace GenericCollisionTrigger
} // namespace app::classes::types
