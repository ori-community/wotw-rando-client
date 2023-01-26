#pragma once
#include <Modloader/app/structs/GenericPoser_Map.h>
#include <Modloader/app/structs/GenericPoser_Map__Array.h>
#include <Modloader/app/structs/GenericPoser_Map__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPoser_Map {
        inline app::GenericPoser_Map__Class** type_info() {
            static app::GenericPoser_Map__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericPoser_Map__Class**)(modloader::win::memory::resolve_rva(0x0478E818));
            }
            return cache;
        }
        inline app::GenericPoser_Map__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericPoser_Map__Class>(type_info(), "RootMotion.FinalIK", "GenericPoser", "Map");
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
