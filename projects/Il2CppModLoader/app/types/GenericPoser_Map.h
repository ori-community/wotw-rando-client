#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericPoser_Map {
        inline app::GenericPoser_Map__Class** type_info = (app::GenericPoser_Map__Class**)(modloader::win::memory::resolve_rva(0x0478E818));
        inline app::GenericPoser_Map__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPoser_Map__Class>(type_info, "RootMotion.FinalIK", "GenericPoser", "Map");
        }
        inline app::GenericPoser_Map* create() {
            return il2cpp::create_object<app::GenericPoser_Map>(get_class());
        }
        inline app::GenericPoser_Map__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericPoser_Map__Array>(get_class(), size);
        }
        inline app::GenericPoser_Map__Array* create_array(const std::vector<app::GenericPoser_Map*>& items) {
            return il2cpp::array_new<app::GenericPoser_Map__Array>(get_class(), items);
        }
    } // namespace GenericPoser_Map
} // namespace app::classes::types
