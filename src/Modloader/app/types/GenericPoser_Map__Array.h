#pragma once
#include <Modloader/app/structs/GenericPoser_Map__Array.h>
#include <Modloader/app/structs/GenericPoser_Map__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPoser_Map__Array {
        inline app::GenericPoser_Map__Array__Class** type_info() {
            static app::GenericPoser_Map__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericPoser_Map__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DD20));
            }
            return cache;
        }
        inline app::GenericPoser_Map__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPoser_Map__Array__Class>(type_info(), "RootMotion.FinalIK", "GenericPoser+Map[]");
        }
        inline app::GenericPoser_Map__Array* create() {
            return il2cpp::create_object<app::GenericPoser_Map__Array>(get_class());
        }
    } // namespace GenericPoser_Map__Array
} // namespace app::classes::types
