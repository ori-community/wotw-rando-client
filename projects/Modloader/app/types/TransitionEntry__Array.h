#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransitionEntry__Array {
        namespace {
            inline app::TransitionEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::TransitionEntry__Array__Class** type_info = &type_info_ref;
        inline app::TransitionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::TransitionEntry__Array__Class>(type_info, "Moon.ComboSystem", "TransitionEntry[]");
        }
        inline app::TransitionEntry__Array* create() {
            return il2cpp::create_object<app::TransitionEntry__Array>(get_class());
        }
    } // namespace TransitionEntry__Array
} // namespace app::classes::types
