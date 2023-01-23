#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicSourceTrigger__Class.h>
#include <Modloader/app/structs/MusicSourceTrigger.h>

namespace app::classes::types {
    namespace MusicSourceTrigger {
        namespace {
            inline app::MusicSourceTrigger__Class* type_info_ref = nullptr;
        }
        inline app::MusicSourceTrigger__Class** type_info = &type_info_ref;
        inline app::MusicSourceTrigger__Class* get_class() {
            return il2cpp::get_class<app::MusicSourceTrigger__Class>(type_info, "", "MusicSourceTrigger");
        }
        inline app::MusicSourceTrigger* create() {
            return il2cpp::create_object<app::MusicSourceTrigger>(get_class());
        }
    } // namespace MusicSourceTrigger
} // namespace app::classes::types
