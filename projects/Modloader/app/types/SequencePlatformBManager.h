#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SequencePlatformBManager__Class.h>
#include <Modloader/app/structs/SequencePlatformBManager.h>

namespace app::classes::types {
    namespace SequencePlatformBManager {
        namespace {
            inline app::SequencePlatformBManager__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformBManager__Class** type_info = &type_info_ref;
        inline app::SequencePlatformBManager__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformBManager__Class>(type_info, "", "SequencePlatformBManager");
        }
        inline app::SequencePlatformBManager* create() {
            return il2cpp::create_object<app::SequencePlatformBManager>(get_class());
        }
    } // namespace SequencePlatformBManager
} // namespace app::classes::types
