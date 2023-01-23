#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GUIScrollGroup__Class.h>
#include <Modloader/app/structs/GUIScrollGroup.h>

namespace app::classes::types {
    namespace GUIScrollGroup {
        inline app::GUIScrollGroup__Class** type_info = (app::GUIScrollGroup__Class**)(modloader::win::memory::resolve_rva(0x04705CC8));
        inline app::GUIScrollGroup__Class* get_class() {
            return il2cpp::get_class<app::GUIScrollGroup__Class>(type_info, "UnityEngine", "GUIScrollGroup");
        }
        inline app::GUIScrollGroup* create() {
            return il2cpp::create_object<app::GUIScrollGroup>(get_class());
        }
    } // namespace GUIScrollGroup
} // namespace app::classes::types
