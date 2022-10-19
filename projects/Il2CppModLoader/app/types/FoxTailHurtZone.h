#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxTailHurtZone {
        namespace {
            inline app::FoxTailHurtZone__Class* type_info_ref = nullptr;
        }
        inline app::FoxTailHurtZone__Class** type_info = &type_info_ref;
        inline app::FoxTailHurtZone__Class* get_class() {
            return il2cpp::get_class<app::FoxTailHurtZone__Class>(type_info, "", "FoxTailHurtZone");
        }
        inline app::FoxTailHurtZone* create() {
            return il2cpp::create_object<app::FoxTailHurtZone>(get_class());
        }
    } // namespace FoxTailHurtZone
} // namespace app::classes::types
