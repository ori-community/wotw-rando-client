#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUILayoutEntry__Class.h>
#include <Modloader/app/structs/GUILayoutEntry.h>
#include <Modloader/app/structs/GUILayoutEntry__Array.h>

namespace app::classes::types {
    namespace GUILayoutEntry {
        inline app::GUILayoutEntry__Class** type_info = (app::GUILayoutEntry__Class**)(modloader::win::memory::resolve_rva(0x0471D840));
        inline app::GUILayoutEntry__Class* get_class() {
            return il2cpp::get_class<app::GUILayoutEntry__Class>(type_info, "UnityEngine", "GUILayoutEntry");
        }
        inline app::GUILayoutEntry* create() {
            return il2cpp::create_object<app::GUILayoutEntry>(get_class());
        }
        inline app::GUILayoutEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::GUILayoutEntry__Array>(get_class(), size);
        }
        inline app::GUILayoutEntry__Array* create_array(const std::vector<app::GUILayoutEntry*>& items) {
            return il2cpp::array_new<app::GUILayoutEntry__Array>(get_class(), items);
        }
    } // namespace GUILayoutEntry
} // namespace app::classes::types
