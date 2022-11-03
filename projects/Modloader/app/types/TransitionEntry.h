#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransitionEntry {
        namespace {
            inline app::TransitionEntry__Class* type_info_ref = nullptr;
        }
        inline app::TransitionEntry__Class** type_info = &type_info_ref;
        inline app::TransitionEntry__Class* get_class() {
            return il2cpp::get_class<app::TransitionEntry__Class>(type_info, "Moon.ComboSystem", "TransitionEntry");
        }
        inline app::TransitionEntry* create() {
            return il2cpp::create_object<app::TransitionEntry>(get_class());
        }
        inline app::TransitionEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::TransitionEntry__Array>(get_class(), size);
        }
        inline app::TransitionEntry__Array* create_array(const std::vector<app::TransitionEntry*>& items) {
            return il2cpp::array_new<app::TransitionEntry__Array>(get_class(), items);
        }
    } // namespace TransitionEntry
} // namespace app::classes::types
