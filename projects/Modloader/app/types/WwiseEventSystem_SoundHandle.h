#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle__Class.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle__Boxed.h>

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
