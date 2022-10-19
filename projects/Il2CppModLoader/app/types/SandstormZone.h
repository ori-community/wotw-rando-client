#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandstormZone {
        namespace {
            inline app::SandstormZone__Class* type_info_ref = nullptr;
        }
        inline app::SandstormZone__Class** type_info = &type_info_ref;
        inline app::SandstormZone__Class* get_class() {
            return il2cpp::get_class<app::SandstormZone__Class>(type_info, "", "SandstormZone");
        }
        inline app::SandstormZone* create() {
            return il2cpp::create_object<app::SandstormZone>(get_class());
        }
        inline app::SandstormZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SandstormZone__Array>(get_class(), size);
        }
        inline app::SandstormZone__Array* create_array(const std::vector<app::SandstormZone*>& items) {
            return il2cpp::array_new<app::SandstormZone__Array>(get_class(), items);
        }
    } // namespace SandstormZone
} // namespace app::classes::types
