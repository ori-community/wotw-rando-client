#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericDamageTrigger__Class.h>
#include <Modloader/app/structs/GenericDamageTrigger.h>

namespace app::classes::types {
    namespace GenericDamageTrigger {
        namespace {
            inline app::GenericDamageTrigger__Class* type_info_ref = nullptr;
        }
        inline app::GenericDamageTrigger__Class** type_info = &type_info_ref;
        inline app::GenericDamageTrigger__Class* get_class() {
            return il2cpp::get_class<app::GenericDamageTrigger__Class>(type_info, "", "GenericDamageTrigger");
        }
        inline app::GenericDamageTrigger* create() {
            return il2cpp::create_object<app::GenericDamageTrigger>(get_class());
        }
    } // namespace GenericDamageTrigger
} // namespace app::classes::types
