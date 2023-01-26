#pragma once
#include <Modloader/app/structs/JumpSustainHelper.h>
#include <Modloader/app/structs/JumpSustainHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JumpSustainHelper {
        inline app::JumpSustainHelper__Class** type_info() {
            static app::JumpSustainHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JumpSustainHelper__Class**)(modloader::win::memory::resolve_rva(0x0471C188));
            }
            return cache;
        }
        inline app::JumpSustainHelper__Class* get_class() {
            return il2cpp::get_class<app::JumpSustainHelper__Class>(type_info(), "", "JumpSustainHelper");
        }
        inline app::JumpSustainHelper* create() {
            return il2cpp::create_object<app::JumpSustainHelper>(get_class());
        }
    } // namespace JumpSustainHelper
} // namespace app::classes::types
