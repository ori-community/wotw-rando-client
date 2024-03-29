#pragma once
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/GenericPuppet__Array.h>
#include <Modloader/app/structs/GenericPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericPuppet {
        inline app::GenericPuppet__Class** type_info() {
            static app::GenericPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericPuppet__Class**)(modloader::win::memory::resolve_rva(0x04788268));
            }
            return cache;
        }
        inline app::GenericPuppet__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppet__Class>(type_info(), "", "GenericPuppet");
        }
        inline app::GenericPuppet* create() {
            return il2cpp::create_object<app::GenericPuppet>(get_class());
        }
        inline app::GenericPuppet__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericPuppet__Array>(get_class(), size);
        }
        inline app::GenericPuppet__Array* create_array(const std::vector<app::GenericPuppet*>& items) {
            return il2cpp::array_new<app::GenericPuppet__Array>(get_class(), items);
        }
    } // namespace GenericPuppet
} // namespace app::classes::types
