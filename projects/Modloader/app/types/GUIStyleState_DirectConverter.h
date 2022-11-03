#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStyleState_DirectConverter {
        namespace {
            inline app::GUIStyleState_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::GUIStyleState_DirectConverter__Class** type_info = &type_info_ref;
        inline app::GUIStyleState_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::GUIStyleState_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "GUIStyleState_DirectConverter");
        }
        inline app::GUIStyleState_DirectConverter* create() {
            return il2cpp::create_object<app::GUIStyleState_DirectConverter>(get_class());
        }
    } // namespace GUIStyleState_DirectConverter
} // namespace app::classes::types
