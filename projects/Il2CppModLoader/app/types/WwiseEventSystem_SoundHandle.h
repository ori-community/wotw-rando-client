#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseEventSystem_SoundHandle {
        namespace {
            inline app::WwiseEventSystem_SoundHandle__Class* type_info_ref = nullptr;
        }
        inline app::WwiseEventSystem_SoundHandle__Class** type_info = &type_info_ref;
        inline app::WwiseEventSystem_SoundHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseEventSystem_SoundHandle__Class>(type_info, "Moon.Wwise", "WwiseEventSystem", "SoundHandle");
        }
        inline app::WwiseEventSystem_SoundHandle* create() {
            return il2cpp::create_object<app::WwiseEventSystem_SoundHandle>(get_class());
        }
        inline app::WwiseEventSystem_SoundHandle__Boxed* box(app::WwiseEventSystem_SoundHandle value) {
            return il2cpp::box_value<app::WwiseEventSystem_SoundHandle__Boxed>(get_class(), value);
        }
    } // namespace WwiseEventSystem_SoundHandle
} // namespace app::classes::types
