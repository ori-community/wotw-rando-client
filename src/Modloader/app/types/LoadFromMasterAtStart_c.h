#pragma once
#include <Modloader/app/structs/LoadFromMasterAtStart_c.h>
#include <Modloader/app/structs/LoadFromMasterAtStart_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoadFromMasterAtStart_c {
        inline app::LoadFromMasterAtStart_c__Class** type_info() {
            static app::LoadFromMasterAtStart_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoadFromMasterAtStart_c__Class**)(modloader::win::memory::resolve_rva(0x04743DC8));
            }
            return cache;
        }
        inline app::LoadFromMasterAtStart_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadFromMasterAtStart_c__Class>(type_info(), "", "LoadFromMasterAtStart", "<>c");
        }
        inline app::LoadFromMasterAtStart_c* create() {
            return il2cpp::create_object<app::LoadFromMasterAtStart_c>(get_class());
        }
    } // namespace LoadFromMasterAtStart_c
} // namespace app::classes::types
