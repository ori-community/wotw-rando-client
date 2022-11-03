#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUIStyle_DirectConverter {
        namespace {
            inline app::GUIStyle_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::GUIStyle_DirectConverter__Class** type_info = &type_info_ref;
        inline app::GUIStyle_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::GUIStyle_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "GUIStyle_DirectConverter");
        }
        inline app::GUIStyle_DirectConverter* create() {
            return il2cpp::create_object<app::GUIStyle_DirectConverter>(get_class());
        }
    } // namespace GUIStyle_DirectConverter
} // namespace app::classes::types
