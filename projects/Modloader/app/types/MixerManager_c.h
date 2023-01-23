#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MixerManager_c__Class.h>
#include <Modloader/app/structs/MixerManager_c.h>

namespace app::classes::types {
    namespace MixerManager_c {
        inline app::MixerManager_c__Class** type_info = (app::MixerManager_c__Class**)(modloader::win::memory::resolve_rva(0x047644E0));
        inline app::MixerManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MixerManager_c__Class>(type_info, "", "MixerManager", "<>c");
        }
        inline app::MixerManager_c* create() {
            return il2cpp::create_object<app::MixerManager_c>(get_class());
        }
    } // namespace MixerManager_c
} // namespace app::classes::types
