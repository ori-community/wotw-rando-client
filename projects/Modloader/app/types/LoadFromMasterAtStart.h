#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoadFromMasterAtStart__Class.h>
#include <Modloader/app/structs/LoadFromMasterAtStart.h>

namespace app::classes::types {
    namespace LoadFromMasterAtStart {
        namespace {
            inline app::LoadFromMasterAtStart__Class* type_info_ref = nullptr;
        }
        inline app::LoadFromMasterAtStart__Class** type_info = &type_info_ref;
        inline app::LoadFromMasterAtStart__Class* get_class() {
            return il2cpp::get_class<app::LoadFromMasterAtStart__Class>(type_info, "", "LoadFromMasterAtStart");
        }
        inline app::LoadFromMasterAtStart* create() {
            return il2cpp::create_object<app::LoadFromMasterAtStart>(get_class());
        }
    } // namespace LoadFromMasterAtStart
} // namespace app::classes::types
