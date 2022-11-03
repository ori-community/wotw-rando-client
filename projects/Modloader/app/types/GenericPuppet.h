#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GenericPuppet {
        inline app::GenericPuppet__Class** type_info = (app::GenericPuppet__Class**)(modloader::win::memory::resolve_rva(0x04788268));
        inline app::GenericPuppet__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppet__Class>(type_info, "", "GenericPuppet");
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
