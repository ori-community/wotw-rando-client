#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FrogEntity {
        inline app::FrogEntity__Class** type_info = (app::FrogEntity__Class**)(modloader::win::memory::resolve_rva(0x04759AC8));
        inline app::FrogEntity__Class* get_class() {
            return il2cpp::get_class<app::FrogEntity__Class>(type_info, "", "FrogEntity");
        }
        inline app::FrogEntity* create() {
            return il2cpp::create_object<app::FrogEntity>(get_class());
        }
        inline app::FrogEntity__Array* create_array(int size) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), size);
        }
        inline app::FrogEntity__Array* create_array(const std::vector<app::FrogEntity*>& items) {
            return il2cpp::array_new<app::FrogEntity__Array>(get_class(), items);
        }
    } // namespace FrogEntity
} // namespace app::classes::types
