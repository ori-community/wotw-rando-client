#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Keyframe_DirectConverter {
        namespace {
            inline app::Keyframe_DirectConverter__Class* type_info_ref = nullptr;
        }
        inline app::Keyframe_DirectConverter__Class** type_info = &type_info_ref;
        inline app::Keyframe_DirectConverter__Class* get_class() {
            return il2cpp::get_class<app::Keyframe_DirectConverter__Class>(type_info, "FullSerializer.Internal.DirectConverters", "Keyframe_DirectConverter");
        }
        inline app::Keyframe_DirectConverter* create() {
            return il2cpp::create_object<app::Keyframe_DirectConverter>(get_class());
        }
    } // namespace Keyframe_DirectConverter
} // namespace app::classes::types
