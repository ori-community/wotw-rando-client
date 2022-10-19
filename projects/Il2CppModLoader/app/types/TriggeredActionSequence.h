#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TriggeredActionSequence {
        namespace {
            inline app::TriggeredActionSequence__Class* type_info_ref = nullptr;
        }
        inline app::TriggeredActionSequence__Class** type_info = &type_info_ref;
        inline app::TriggeredActionSequence__Class* get_class() {
            return il2cpp::get_class<app::TriggeredActionSequence__Class>(type_info, "", "TriggeredActionSequence");
        }
        inline app::TriggeredActionSequence* create() {
            return il2cpp::create_object<app::TriggeredActionSequence>(get_class());
        }
    } // namespace TriggeredActionSequence
} // namespace app::classes::types
