#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
